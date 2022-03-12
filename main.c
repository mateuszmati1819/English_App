#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "functions.h"

// int main(void)
// {
  
//   char are_you_continuing;
//   char word[50];
//   char links[] = "D:/Praca/Projekty/English_App/English_App/vocabluary.txt";
//   randomingLine(links,word);
//   printf("Randomed line is: %s", word);

//   srand(time(NULL)); 

//   do
//   { 
//     printf("Do you want continue y/n?");
//     scanf(" %c", &are_you_continuing);
//     randomingLine(links,word);
//     printf("Randomed line is: %s \n", word);

//   }
//   while(are_you_continuing =='y');

//   return 0;
// }

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

int main()
{
  system("cls");
  char text[50];
  int randomed;
  int i=0;
  srand(time(NULL));
  

  do
  {
    printf("%d \n", i);
    randomed = rand()%3+1;
    printf("%d", randomed);
    function(text, randomed);
    printf("%s", text);
    i++;
  } while (i<4);
  
}


// Ideas -> you can also bring to the function randomed numebr and only red this line  without randoming its in function. 
// Function should be the simplest as it is possible.