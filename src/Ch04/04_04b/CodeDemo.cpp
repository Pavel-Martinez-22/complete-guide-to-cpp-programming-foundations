// Complete Guide to C++ Programming Foundations
// Exercise 04_04
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <chrono> //This library contains classes for dealing with time

// Type aliases for chrono classes
//These aliases make the code more readable by providing shorter and more meaningful names
using Clock = std::chrono::system_clock;
using TimePoint = std::chrono::time_point<Clock>;
using Duration = std::chrono::duration<double>;

int main(){
    TimePoint *start, *end; //Pointers start and end point TimePoint start object and TimePoint end object respectively
    Duration *elapsed_seconds = new Duration(); // elapsed_second Pointer to a dynamically allocated Duration object on the heap

    std::string input;

    start = new TimePoint(Clock::now()); // start pointer is initialized to point to a Dynamically created TimePoint object created on the heap with current time

    std::cout << "Type 'start' as quickly as you can and hit ENTER: " << std::flush;
    std::cin >> input;

    end = new TimePoint(Clock::now());// end pointer  is initialized to point to a Dynamically created TimePoint object created on the heap with current time
    *elapsed_seconds = *end - *start; // Calculate elapsed time by subtracting start time object from end time object and store the result in the Duration object pointed to by elapsed_seconds (by dereferencing the pointer)

    std::cout << "Reaction time: " << elapsed_seconds->count() << "s" << std::endl;
    
    //Delete objects to free memory, this will avoid memory leakage
    delete start;
    delete end;
    delete elapsed_seconds;

    std::cout << std::endl << std::endl;
    return 0;
}
