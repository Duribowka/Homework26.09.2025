#include "string_calculations.h"

int main(int argc, char** argv){

    int strCount = 0;
    int intCount = 0;
    int flgCount = 0;
    int keyCount = 0;

    int j = 0;

    for (int i = 1; i<argc; i++){
        
        if (argv[i][0] != '-'){

            if (is_string(argv, i) == 1){
                strCount++;
            }
            else{
                intCount++;
            }

        }
        else if (argv[i][1] == '-'){
            keyCount++;
        }
        else{flgCount++;} 

    }

    printf("integers: %d\nstrings: %d\nflags: %d\nkeyword: %d\n", intCount, strCount, flgCount, keyCount);

    // PART 2

    int *intArray = (int*)malloc(sizeof(int)*intCount);
    char **strArray = (char**)malloc(sizeof(char*) * strCount);
    char **flgArray = (char**)malloc(sizeof(char*) * flgCount);
    char **keyArray = (char**)malloc(sizeof(char*) * keyCount);
    int ii = 0; int si = 0; int fi = 0; int ki = 0;

    j = 0;
    
    for (int i = 1; i<argc; i++){
        int chars = 0;
        if (argv[i][0] != '-'){

            if (is_string(argv, i) == 1){

                strArray[si] = argv[i];
                si++;
            }
            else{
                intArray[ii] == atoi(argv[i]);
                ii++;
            }
        }   
        else if (argv[i][1] == '-'){
            keyArray[ki] = argv[i];
            ki++;
        }
        else{
            flgArray[fi] = argv[i];
            fi++;
        } 

    }

    printf("\nArray of integers: ");
    for (int i = 0; i<ii; i++){
        printf("%d ", intArray[i]);
    }

    printf("\n\nArray of strings: ");
    for (int i = 0; i<si; i++){
        printf("%s ", strArray[i]);
    }

    printf("\n\nArray of flags: ");
    for (int i = 0; i<fi; i++){
        printf("%s ", flgArray[i]);
    }
    
    printf("\n\nArray of keywords: ");
    for (int i = 0; i<ki; i++){
        printf("%s ", keyArray[i]);
    }
    printf("\n");

    free(intArray);
    free(strArray);
    free(flgArray);

    return 0;
}