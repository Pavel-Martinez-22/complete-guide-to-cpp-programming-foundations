// Complete Guide to C++ Programming Foundations
// Exercise 04_09
// C Strings, by Eduardo Corpeño 

#include <iostream>
#include <cstring>

int main(){
    const size_t LENGTH = 50;
    char racer1[] = "Speedy";//C string using a string literal character array
    char racer2[LENGTH];
    char raceResult[LENGTH * 2];

    //Using Function strcpy to copy a string into a buffer
    strncpy(racer2, "Lightning", sizeof(racer2) - 1); 
    racer2[sizeof(racer2) - 1] = '\0'; //Null-terminate the string racer2

    std::cout << "Racer 1: " << racer1 << std::endl;
    std::cout << "Racer 2: " << racer2 << std::endl;

    //Using Function strcpy to copy a string into a buffer
    strncpy(raceResult, "And the winner is ", sizeof(raceResult) - 1);
    raceResult[sizeof(raceResult) - 1] = '\0'; //Null-terminate the string raceResult

    //Using Function strcat to concatenate two strings
    strncat(raceResult, racer1, sizeof(raceResult) - strlen(raceResult) - 1);
    
    std::cout << raceResult << std::endl;
    
    std::cout << std::endl << std::endl;

    return 0;
}
