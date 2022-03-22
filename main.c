#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "functions.h"
#include <string.h>

int main()
{
  system("cls");
  char text[50];
  char userWord[150];
  int randomed;
  char continuation;
  srand(time(NULL));

  char polishWord[150];
  char englishWord[150];
do{
  randomed = rand()%3+1;
  function(text, randomed);
  polish_englishWord(text , englishWord, polishWord);
  printf("%s\n", englishWord);
  printf("Jak powiesz to po polsku\n");
  scanf(" %[^\n]s", &userWord);
  strcat(userWord,"\n");

  if(!strcmp(userWord,polishWord))
  {
    printf("Good!");
  }
  else
  {
    printf("Error :/\n");
    printf("%s\n", polishWord);
  }
  printf("Do you want continue y/n?");
  scanf(" %c", &continuation);
}while(continuation == 'y');
  return 0;

  }