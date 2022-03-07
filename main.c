#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    system("cls");
    FILE *fptr;
    char word[150];
    char qWord[150];
    int draw;
    char c;  // To store a character read from file
    int count = 1;  // Line counter (result)
    fptr = fopen("D:/Praca/Projekty/English_App/English_App/vocabluary.txt","r");

    if(fptr==NULL) 
    {
        printf("Not found file");
        exit(1);
    }

    // Extract characters from file and store in character c
    for (c = getc(fptr); c != EOF; c = getc(fptr))
        if (c == '\n') // Increment count if this character is newline
            count = count + 1;
    srand(time(NULL));
    draw = rand()%count + 1;
    printf("%d",draw);
    fclose(fptr);
    count = 1; 
    fptr = fopen("D:/Praca/Projekty/English_App/English_App/vocabluary.txt","r");

    while(!feof(fptr))
    {
        fgets(word, 150, fptr);
        if(draw==count)
        {
            strcpy(word, qWord);
        }
        count++;
        printf("%d",count);
    }
    printf("%s",qWord);
    printf("%s",word);

    fclose(fptr);

    return 0;
}