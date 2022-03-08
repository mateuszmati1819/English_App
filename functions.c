void fun4fun(char *any_string)
{
    FILE *fptr;
    char word[150];
    char qWord[150];

    fptr = fopen(any_string,"r");

    if(fptr==NULL) 
    {
        printf("Not found file");
    }
    
    while(!feof(fptr))
    {
        fgets(word, 150, fptr);
        strcpy(qWord, word);
    }

    printf("%s", qWord);
    
}