//
// Created by Tharindu on 9/5/18.
//
#include <stdio.h>
#include <string.h>

enum {
    max_input_length = 256
};

int main() {
    char inputBuffer[max_input_length + 1];
    printf("Type here : ");
    fgets(inputBuffer, max_input_length, stdin);
    inputBuffer[strcspn(inputBuffer, "\n")] = 0; //remove the newline character from the input
    printf("The string you typed is \"%s\"\n", inputBuffer);
    return 0;
}