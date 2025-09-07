// Complete Guide to C++ Programming Foundations
// Exercise 05_04
// While Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> playerScores = {12, 25, 31, 47, 58};
    
    auto scorePtr = playerScores.begin();// .begin() returns an iterator to the first element of the vector
    
    while(scorePtr != playerScores.end()){// .end() returns an iterator to the position after the last element of the vector
        std::cout << *scorePtr << " ";
        scorePtr = next(scorePtr, 1);// next() returns an iterator advanced by the specified number of positions in this case 1
    }
    std::cout << std::endl;
    
    int i = 0;
    do{
        std::cout << playerScores[i] << " ";
        i++;
    } while(i < playerScores.size());
    std::cout << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
