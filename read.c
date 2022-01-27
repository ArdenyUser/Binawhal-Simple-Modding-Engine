#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    int dat;
    int L[] = {1,2};
    int Mod[] = {1,2};
    int freep = 0;
    
    
    fp = fopen("map", "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);

    while ((read = getline(&line, &len, fp)) != -1) {
        if (strcmp(read, "Sector Define") == 0)
        {
            printf("SECTOR DEFINED");
        }
        if (dat == 1)
        {
            L[freep] = read;
            freep += 1;
        }
    }

    fclose(fp);
    if (line)
        free(line);
    exit(EXIT_SUCCESS);
    
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    int dat;
    int freep = 0;
    
    
    fp = fopen("map", "r");
    if (fp == NULL)
    {
        exit(EXIT_FAILURE);
    }

    while ((read = getline(&line, &len, fp)) != -1) {
        Mod[freep] = read;
        freep += 1;
    }

    fclose(fp);
    if (line)
        free(line);
    exit(EXIT_SUCCESS);
    
    
}
