#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv){

    if (argv[1][0] == '-' && argv[1][1] == '-'){

        if (strcmp(argv[1], "--greet") == 0){
            if (argc == 3){
                printf("Greetings, %s!", argv[2]);
            }
            else{
                printf("Not enough arguments...");
            }
        }
        else if (strcmp(argv[1], "--add") == 0){
            if (argc = 4){
                int sum = atoi(argv[2])+atoi(argv[3]);
                printf("Sum = %d", sum);
            }
            else{
                printf("Not enough arguments...");
            }
        }
        else if (strcmp(argv[1], "--list") == 0){
            for (int i = 0; i<6; i++){
                for (int j = 0; j<i; j++){
                    printf("list ");
                }
                if (i != 5){printf("\n");}
            }
        }
        else{
            printf("Here is the list of all commands:\n--greet\n--add\n--list");
        }
    }
    else{
        printf("RAHHHHH use --");
    }

    return 0;
}