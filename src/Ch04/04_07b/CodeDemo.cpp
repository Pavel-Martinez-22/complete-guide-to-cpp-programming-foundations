// Complete Guide to C++ Programming Foundations
// Exercise 04_07
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <complex>

int main(){
    std::vector<std::complex<double>> points;

    points.push_back(std::complex<double>(3.5, 4.0));
    points.push_back(std::complex<double>(1.0, -2.1));
    points.push_back(std::complex<double>(-5.3, 6.0));
    points.push_back(std::complex<double>(7.2, 8.9));  

    // Accessing elements in different ways
    std::cout << "The first real part: " << points.begin()->real() << std::endl;//begin() returns an iterator to the first element, we then use the arrow operator to access the real member function which returns the real part of the complex number.
    std::cout << "Imaginary part at index 1: " << points[1].imag() << std::endl;//We access this by index, and then use the dot operator to access the imag member function which returns the imaginary part of the complex number.
    std::cout << "Next to last real: " << prev(points.end(), 2)->real() << std::endl;//prev() this guarantees going back a number of positions in the container. Argument 1 is the iterator and the 2nd argument is the number of positions you want to go back. we then use the arrow operator to access the real member function which returns the real part of the complex number.
    std::cout << "Last imaginary: " << (points.end() - 1)->imag() << std::endl; //end() returns an iterator to one past the last element, so we decrement it by one to get the last element. we then use the arrow operator to access the imag member function which returns the imaginary part of the complex number.

    std::cout << std::endl << std::endl;
    return 0;
}
