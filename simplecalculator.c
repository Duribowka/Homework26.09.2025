#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){

    int result;

    if (argv[2][0] == '+'){

        result = atoi(argv[1]) + atoi(argv[3]);
        printf("Result = %d\n", result);
    }

    else if (argv[2][0] == '-'){

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

    else{printf("Wrong input...\n");}

    return 0;
}