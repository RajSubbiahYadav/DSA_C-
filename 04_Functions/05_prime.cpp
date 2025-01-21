#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }

    // Optimization: Check for divisibility up to the square root of n
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false; // If divisible by any number other than 1 and itself, it's not prime
        }
    }

    return true; // If no divisors found, it's prime
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}