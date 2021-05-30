#include <iostream>
#include <vector>
#include <string>

const std::string letters[26] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
int calls = 0;

std::string nthIteration(int iteration) {
    calls++;
    
    if (iteration == 1) {
        return "a";
    }
    else {
        std::string priorIteration = nthIteration(iteration - 1);
        return priorIteration + letters[iteration - 1] + priorIteration;
    }
}

int main() {
    int iteration; 

    std::cout << "Enter iteration: ";
    std::cin >> iteration;

    std::cout << "Length of " << iteration << "th iteration is: " << nthIteration(iteration).size() << "\n";
    std::cout << "Made " << calls << " calls to recursive function";
}