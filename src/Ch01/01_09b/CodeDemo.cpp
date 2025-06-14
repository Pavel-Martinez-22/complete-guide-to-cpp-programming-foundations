// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "Enter your name: " << std::flush; //flush makes sure that the output is completly sent to the terminal before waiting for the user input
    std::cin >> name;
    std::cout << "Nice to meet you, " << name << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}