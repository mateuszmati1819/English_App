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
  int randomed;
  srand(time(NULL));

  char str[80];
  char polishWord[150];
  char englishWord[150];

  randomed = rand()%3+1;
  function(text, randomed);
  printf("%s", text);

  polish_englishWord(text , polishWord, englishWord);
  
  printf("Polish Word: %s\n", polishWord);
  printf("English Word: %s\n", englishWord);


  return 0;

  // do
  // {
  //   printf("Do you want continue?");
  //   scanf(" %c",&sign);

  //   fflush(stdin);
  // } while (sign=='y');
  
}


// Ideas -> you can also bring to the function randomed numebr and only red this line  without randoming its in function. 
// Function should be the simplest as it is possible.