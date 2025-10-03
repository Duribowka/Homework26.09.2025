#include "../headers/string_calculations.h"
#include "../headers/integer_calculations.h"

int main(int argc, char** argv){

    int flag;

    for (int i = 2; i<argc; i++){
        flag = 0;
        for (int j = 0; argv[i][j] != 0; j++){
            if (argv[i][j] != argv[1][j]){
                flag = 1;
            }
        }
        if (flag == 0){
            printf("I found '%s' at %d-th position\n", argv[1], i);
        }
    }

    return 0;
}