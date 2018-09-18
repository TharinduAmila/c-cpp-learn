//
// Created by Tharindu on 9/5/18.
//
#include <iostream>

int main(int argc, char **argv) {
    std::cout << "Hello, World from CPP !!" << std::endl; //endl flushes out the buffer
    printf("Hello, World"); //works as cpp contains c definitions
    std::cerr << "Hello, World from CPP !!" << std::endl;
    return 0;
}