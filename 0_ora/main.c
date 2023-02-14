#include <stdio.h>

//Get command line arguments from the user and print them out
int main(int argc, char *argv[]){
    //Print all the arguments
    for(int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);

    }
}