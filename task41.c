#include "../headers/string_calculations.h"
#include "../headers/integer_calculations.h"

int main(int argc, char** argv){

    int charcnt = 0;
    int globalcnt = 0;

    for (int i = 1; i<argc; i++){

        for (int j = 0; argv[i][j] != 0; j++){

            charcnt++;
            globalcnt++;
        }
        printf("%s has %d characters\n", argv[i], charcnt);
        charcnt = 0;
    }

    printf("All characters: %d\n", globalcnt);

    return 0;
}