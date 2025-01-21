#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }

    // Optimization: Check for divisibility up to the square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // If divisible by any number other than 1 and itself, it's not prime
        }
    }

    return true; // If no divisors found, it's prime
}

int main() {
    int N;

    cout << "Enter a number (N): ";
    cin >> N;

    cout << "Prime numbers from 2 to " << N << ":\n";

    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}