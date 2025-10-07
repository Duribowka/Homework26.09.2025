#include "../headers/string_calculations.h"
#include "../headers/integer_calculations.h"

int main(int argc, char** argv){

    char buffer[1024];
    char line[5];

    FILE *fp;

    int inWord = 0;
    int wordCount;
    int bytecount;
    int linecount;

    for (int j = 1; j<argc; j++){
        
        wordCount = 0;
        linecount = 1;
        bytecount = 0;
        inWord = 0;

        fp = fopen(argv[j], "r");

        if (fp == NULL) {
        printf("Error: file '%s' does not exist...\n", argv[j]);
        
        }
        else{
            printf("File %s opened successfully!", argv[j]);

        while(fgets(line,5,fp)!=NULL)
        {   

        strcat(buffer,line);

        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] == ' ' || line[i] == '\n' || line[i] == '\t') {
                inWord = 0;
                if (line[i] == '\n') {
                    linecount++;
                }
            } else if (inWord == 0) {
                inWord = 1;
                wordCount++;
            }
        }
        }
        fseek(fp, 0, SEEK_END);
        bytecount = ftell(fp);
        rewind(fp);
        printf("\nNumber of words in the file: %d\nNumber of lines: %d\nSize in bytes: %d\n", wordCount, linecount, bytecount);
        }
    }

    fclose(fp);
        
    return 0;
}