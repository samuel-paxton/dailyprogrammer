#include <iostream>
#include <vector>
#include <string>

int nextpal(int pal) {
    return 5;
}

int main() {
    int pal; 

    std::cout << "Enter palindrome: ";
    std::cin >> pal;

    std::cout << "The next smallest palindrome is: " << nextpal(pal) << "\n";
}