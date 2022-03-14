#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void function(char* text, int randomed)
{

  FILE *fptr;
  fptr = fopen("D:/Praca/Projekty/English_App/English_App/vocabluary.txt","r");
  char word[150];
  int count =1;
  

  if(fptr==NULL) 
  {
        printf("Not found file");
  }

  while(!feof(fptr))
  {
    fgets(word, 150, fptr);

    if(randomed==count)
    {
      strcpy(text, word);
    }
    count++;
    
  }  
}


void polish_englishWord(char *sentence, char *polishWord, char *englishWord)
{
  char *token;
  char s[2] = "-";
  token = strtok(sentence, s);
  static int i=0;

  while(token !=NULL)
  {
    if(i==0)
    {
      strcpy(polishWord, token);
    }
    else
    {
      strcpy(englishWord, token);
    }
     
    token = strtok(NULL, s);
    i++;
  }

}


