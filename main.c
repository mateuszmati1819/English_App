#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "functions.h"

int main()
{
  system("cls");
  char text[50];
  int randomed;
  static int i=0;
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