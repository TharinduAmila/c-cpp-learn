//
// Created by Tharindu on 9/18/18.
//
#include <stdio.h>

int main(int argc, char **argv) {
    printf("Hello, World!\n");
    fprintf(stdout, "Hello, World!\n"); //standard out
    fprintf(stderr, "Hello, World!\n"); //error stream
    //order may change as stdout is buffered and stderr is typically not
    return 0;
}