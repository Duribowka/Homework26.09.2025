#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv){
    
    FILE *fp;

    char ch;

    for (int i = 1; i<argc; i++){

        fp = fopen(argv[i], "r");

        if (fp == NULL) {
        printf("Error: file '%s' does not exist...\n", argv[i]);
        }
        else{
            printf("--------- %s content ---------\n", argv[i]);
            while ((ch = fgetc(fp)) != EOF){
                putchar(ch);
            }
            printf("\n--------- End of content ---------\n");
        }

    }

    return 0;
}