#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;


void insertionSort(vector<int>& bucket) {
    int n = bucket.size();
    for (int i = 1; i < n; ++i) {
        int key = bucket[i];
        int j = i - 1;

        while (j >= 0 && bucket[j] > key) {
            bucket[j + 1] = bucket[j];
            j--;
        }

        bucket[j + 1] = key;
    }
}


void bucketSort(vector<int>& arr) {
    int n = arr.size();
    const int numBuckets = 10; 

    
    vector<vector<int>> buckets(numBuckets);

    
    for (int i = 0; i < n; ++i) {
        int index = arr[i] / (n / numBuckets);
        buckets[index].push_back(arr[i]);
    }

    
    for (int i = 0; i < numBuckets; ++i) {
        insertionSort(buckets[i]);
    }

    
    int index = 0;
    for (int i = 0; i < numBuckets; ++i) {
        for (int j = 0; j < buckets[i].size(); ++j) {
            arr[index++] = buckets[i][j];
        }
    }
}

int main() {
    
    srand(time(nullptr));

    
    const int n = 1000;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        numbers[i] = rand() % 1000;
    }

    bucketSort(numbers);

    
    cout << "Sorted Numbers:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << numbers[i] << " ";
        if ((i + 1) % 10 == 0) {
            cout << endl; 
        }
    }

    return 0;
}
