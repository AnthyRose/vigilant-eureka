#include <iostream>
#include <cmath>
#include <random>

// Function to check if a number is prime
bool is_prime(int number) {
    if (number <= 1) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;

    int root = sqrt(number);
    for (int i = 3; i <= root; i += 2) {
        if (number % i == 0) return false;
    }

    return true;
}

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 512);

    // Generate 6 random numbers and check if they are prime
    for (int i = 0; i < 6; i++) {
        int number = dis(gen);
        std::cout << "Number: " << number << " is " << (is_prime(number) ? "prime" : "not prime") << std::endl;
    }

    return 0;
}
