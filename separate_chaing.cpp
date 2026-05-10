#include <iostream>
#include <vector>
using namespace std;

// Hash function: gives index using modulo
int hashFunc(int key, int size) {
    return key % size;   // %10 used in this case
}

int main() {
    int size = 10;  // size of hash table

    // 2D vector for separate chaining
    // Each index stores a list (chain) of values
    vector<vector<int>> table(size);

    // Input keys
    int keys[] = {15, 25, 35, 45};
    int n = sizeof(keys) / sizeof(keys[0]);

    // ---------------- INSERTION ----------------
    for (int i = 0; i < n; i++) {
        int index = hashFunc(keys[i], size);  
        // Find index using hash function

        table[index].push_back(keys[i]);      
        // Insert key into that index's chain
    }

    // ---------------- DISPLAY ----------------
    for (int i = 0; i < size; i++) {
        cout << "Index " << i << ": ";

        // Print all elements in chain at index i
        for (int val : table[i]) {
            cout << val << " ";
        }

        cout << endl;
    }

    return 0;
}

