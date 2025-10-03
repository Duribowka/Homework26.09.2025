#include "../headers/string_calculations.h"
#include "../headers/integer_calculations.h"

int main(int argc, char** argv){

    char port[50] = "8080";
    char host[50] = "localhost";
    char debug[50] = "false";

    printf("Default port: %s\nDefault host: %s\nDefault debug: %s\n", port, host, debug);

    for (int i = 1; i<argc; i++){
        if (strcmp(argv[i], "--port") == 0 || strcmp(argv[i], "-p") == 0){
            if (i+1 <= argc){
                    strcpy(port, argv[i+1]);
            }
            else{
                printf("Error: not enough arguments...");
            }
        }
        else if (strcmp(argv[i], "--host") == 0 || strcmp(argv[i], "-h") == 0){
            if (i+1 <= argc){
                    strcpy(host, argv[i+1]);
            }
            else{
                printf("Error: not enough arguments...");
            }
        }
        else if (strcmp(argv[i], "--debug") == 0 || strcmp(argv[i], "-d") == 0){
            if (strcmp(debug, "false") == 0){
                strcpy(debug, "true");
            }
            else{
                strcpy(debug, "false");
            }
        }
        else{
            printf("Error: flag not recognised...\nLisr of all flags:\n1. '--port' '-p'\n2. '--host' '-h'\n3. '--debug' '-d'\n");
        }
    }

    printf("Settings were changes:\nport: %s\nhost: %s\ndebug: %s\n", port, host, debug);

    return 0;
    
}