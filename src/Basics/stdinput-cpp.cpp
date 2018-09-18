//
// Created by Tharindu on 9/5/18.
//
#include <iostream>

int main(int argc, char **argv) {
    std::string inputString;
    std::cout << "Type here : ";
    std::getline(std::cin, inputString); //cin itself will break on each word so you will only get the first word of your input
    std::cout << "The string you typed is \"" << inputString << "\"" << std::endl;
    return 0;
}