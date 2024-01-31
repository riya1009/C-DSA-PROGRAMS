#include <iostream>
#include <vector>

// Function to calculate the nth Catalan number
unsigned long long catalanNumber(int n) {
    if (n <= 1) {
        return 1;
    }

    std::vector<unsigned long long> catalan(n + 1, 0);
    catalan[0] = 1;
    catalan[1] = 1;

    for (int i = 2; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            catalan[i] += catalan[j] * catalan[i - j - 1];
        }
    }

    return catalan[n];
}

int main() {
    int n = 10; // Change this to the desired value of n

    unsigned long long result = catalanNumber(n);
    std::cout << "Catalan number for n = " << n << " is " << result << std::endl;

    return 0;
}
