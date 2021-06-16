#include <iostream>

const int coinValues[] = {500, 100, 25, 10, 5, 1};

int amountToCoins(int& amount, const int coinValue) {
    int numCoins = 0;

    while (amount - coinValue >= 0) {
        amount -= coinValue;
        numCoins++;
    }

    return numCoins;
}

int change(int amount) {
    int numCoins = 0;
    int coinIndex = 0;

    while (amount > 0) {
        numCoins += amountToCoins(amount, coinValues[coinIndex]);
        coinIndex++;
    }

    return numCoins;
}

int main() {
    std::cout << "change(0) => " << change(0) << "\n";
    std::cout << "change(12) => " << change(12) << "\n";
    std::cout << "change(468) => " << change(468) << "\n";
    std::cout << "change(123456) => " << change(123456) << "\n";
}