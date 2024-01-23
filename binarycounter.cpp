#include <iostream>
#include <vector>
using namespace std;

// Function to increment a binary counter represented as a vector of 0s and 1s
void incrementBinaryCounter(vector<int>& counter) {
    int i = 0;
    while (i < counter.size() && counter[i] == 1) {
        counter[i] = 0;
        i++;
    }
    if (i < counter.size()) {
        counter[i] = 1;
    }
}
// Function to display the binary counter
void displayBinaryCounter(vector<int>& counter) {
    for (int i = counter.size() - 1; i >= 0; i--) {
        std::cout << counter[i];
    }
    cout << endl;
}

int main() {
    // Initialize a 16-bit binary counter with all 0s
    vector<int> binaryCounter(16, 0);

    cout << "Initial Binary Counter: ";
    displayBinaryCounter(binaryCounter);
// Increment the binary counter 16 times to test
    for (int i = 0; i < 16; i++) {
        incrementBinaryCounter(binaryCounter);
        std::cout << "After Increment " << i + 1 << ": ";
        displayBinaryCounter(binaryCounter);
    }

}
