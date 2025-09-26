#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){

    int sum = 0;
    int average;
    int min = atoi(argv[1]);
    int max = atoi(argv[1]);
    int numcount = 0;

    for (int i = 1; i<argc; i++){

        if (argv[i][0] - '0' > 9 || argv[i][0] - '0' < 0){
            printf("%s is not a number!\n", argv[i]);
        }
        else{
            numcount++;
            sum = sum + atoi(argv[i]);
            if (atoi(argv[i]) > atoi(argv[i-1])){
                min = atoi(argv[i-1]);
            }
            if (atoi(argv[i]) < atoi(argv[i-1])){
                max = atoi(argv[i-1]);
            }
        }
    }
    average = sum/numcount;

    printf("Sum of all number = %d\nAverage = %d\nMinimum = %d\nMaximum = %d\n", sum, average, min, max);

    return 0;
}