#include "../headers/string_calculations.h"
#include "../headers/integer_calculations.h"

int main(int argc, char** argv){

    int number;
    char output[50];
    int isnum;

    for (int i = 1; i<argc; i++){

        isnum = 0;
        if (strcmp(argv[i], "-n") == 0){
            if (i+1 <= argc){
                for (int j = 0; argv[i+1][j] != 0; j++){ 
                    if (argv[i+1][j] - '0' > 9 || argv[i+1][j] - '0' < 0){
                        isnum = 1;
                        }
                }
                if (isnum == 1){
                    printf("Error: '-n' requires a number...\n");
                }
                else{
                    number = atoi(argv[i+1]);
                }
            }
            else{
                printf("Error: '-n' requires a number...\n");
            }
            
        }
        else if (strcmp(argv[i], "-o") == 0){
            if (argv[i+1] != NULL){
                for (int j = 0; argv[i+1][j] != 0; j++){
                    output[j] = argv[i+1][j];
                }
                printf("File '%s' is set as output file!\n", output);
            }
            else{
                printf("Error: '-o' requires a filename...\n");
            }
        }
        else if(strcmp(argv[i], "-v") == 0){
            printf("Verbose enabled.\n");
        }
        else{
            printf("Error: unknown command...\n");
        }
    }

    printf("Number value is %d\nOutput file is '%s'\n", number, output);

    return 0;
}