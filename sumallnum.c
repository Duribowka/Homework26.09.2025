#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){

    int sum = 0;

    for (int i = 1; i<argc; i++){

        if (argv[i][0] - '0' > 9 || argv[i][0] - '0' < 0){
            printf("%s is not a number!\n", argv[i]);
        }
        else{
            sum = sum + atoi(argv[i]);
        }
    }

    printf("Sum of all number = %d\n", sum);

    return 0;
}