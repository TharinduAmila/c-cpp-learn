/*
Created by Tharindu on 9/18/18.
 Scope is where an identifier can be safely used after its declaration and definition
 Storage class defines when and where memory is allocated and de-allocated. There are four storage classes
 auto : default storage class inside a block. temporary space
 static :permanent storage till end of program
 register : tells to store the variable in a register for optimization. May or may not be respected by the compiler
 extern : this is defined somewhere else
*/
#include <stdio.h>


int main(int argc, char **argv) {

    if (1) {
        int onlyInsideIfBlock = 10;
        printf("Only inside if : %d\n", onlyInsideIfBlock);
    }
    for (int i = 0; i < 4; ++i) {
        int autoNumber = 5; //start of storage lifespan
        printf("Auto stored number value : %d\n", autoNumber++);
        //end of autoNumber storage lifespan
    }
    for (int i = 0; i < 4; ++i) {
        static int staticNumber = 5; //start of storage lifespan on first loop
        printf("Static stored number value : %d\n", staticNumber++);
        //does not end  staticNumber storage lifespan
    }
    extern void printName();
    extern int var;
    printName();
    printf("Extern number %d\n", var);
}

int unableToUseWithinMain = 5; // cannot be used within main function