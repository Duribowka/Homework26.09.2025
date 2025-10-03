#include "integer_calculations.h"

int math_operation(char* argv1, char* op, char* argv2){

    int result;

    if (op[0] == '+'){

        result = atoi(argv1) + atoi(argv2);
        //printf("Result = %d\n", result);
    }
    else if (op[0] == '-'){

        result = atoi(argv1) - atoi(argv2);
        //printf("Result = %d\n", result);
    }
    else if (op[0] == 'x'){

        result = atoi(argv1) * atoi(argv2);
        //printf("Result = %d\n", result);
    }
    else if (op[0] == '/'){

        result = atoi(argv1) / atoi(argv2);
        //printf("Result = %d\n", result);
    }
    else{
        printf("Error: wrong input...\n");
    }

    return result;
}
