#include "../headers/string_calculations.h"
#include "../headers/integer_calculations.h"

int main(int argc, char** argv){

    FILE *f;

    for (int i = 1; i<argc; i++){
        if (strcmp(argv[i], "-v") == 0 || strcmp(argv[i], "--verbose") == 0){
            printf("Verbose enabled.\n");
        }
        else if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0){
            printf("Here is list of all commands:\n1. -v\n2. --verbose\n3. -h\n4. --help\n");
        }
        else{
            f = fopen(argv[i], "r");
            if (f == NULL){
                printf("Error: could not open file '%s'...\n", argv[i]);
            }
            else {
                printf("File '%s' opened succesfully!\n", argv[i]);
            }
        }
    }

    return 0;
}