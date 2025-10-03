#include "string_calculations.h"

int is_string(char** argv, int i){
    
    for (int j = 0; argv[i][j] != 0; j++){
                
        if (argv[i][j] - '0' > 9 || argv[i][j] - '0' < 0){
            
            return 1;
            
        }

    }

    return 0;
}

int is_same(char** argv, char flag){

    if (strcmp(argv, flag) == 0){
        return 1;
    }
    return 0;
}