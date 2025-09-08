// Complete Guide to C++ Programming Foundations
// Exercise 06_02
// Passing Values to a Function, by Eduardo Corpeño 

#include <iostream>

//Takes arguments by value
int square(int x){
    x = x * x;
    return x;
}

//takes arguments by address (Aka as pointers)
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

//This is an overloaded version of swap. In other words this is another version of the swap function with a different parameters list
//takes arguments by reference
void swap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 9, b;
    b = square(a); //Call square function using Pass by value

    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(&a, &b); //Call swap function using Pass by address using the address of operator &

    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(a,b); //Call swap function using Pass by reference
    
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
