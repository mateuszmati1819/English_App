void randomingLine(char* link, char* any_string)
{
    FILE *fptr;
    char word[150];
    char qWord[150];
    int randomed;
    char c;
    int count;

    //strcpy(link, any_string);
    fptr = fopen(link,"r");

    if(fptr==NULL) 
    {
        printf("Not found file");
    }

    // Extract characters from file and store in character c
    for (c = getc(fptr); c != EOF; c = getc(fptr))
        if (c == '\n') // Increment count if this character is newline
            count = count + 1;
    
    // srand(time(NULL)); // this one should be removed    
    randomed = rand()%count + 1;
    fclose(fptr);
    count = 1; 
    fptr = fopen(link,"r");

    while(!feof(fptr))
    {
        fgets(word, 150, fptr);

        if(randomed == count)
        {
            strcpy(qWord, word);
        }

        count++;
    }

    fclose(fptr);
    //printf("%s", qWord);
    strcpy(any_string, qWord);
    
}