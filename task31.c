#include "integer_calculations.h"

int main(int argc, char** argv){

    int result;

    result = math_operation(argv[1], argv[2], argv[3]);

    /*if (argv[2][0] == '-'){

        result = atoi(argv[1]) - atoi(argv[3]);
        printf("Result = %d\n", result);
    }

    else if (argv[2][0] == 'x'){

        result = atoi(argv[1]) * atoi(argv[3]);
        printf("Result = %d\n", result);
    }

    else if (argv[2][0] == '/'){

        result = atoi(argv[1]) / atoi(argv[3]);
        printf("Result = %d\n", result);
    }

    else{printf("Wrong input...\n");}*/

    printf("Result = %d\n", result);

    return 0;
}