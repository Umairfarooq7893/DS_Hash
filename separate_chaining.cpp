#include <iostream>
#include <vector>
using namespace std;

int hashFunc(int key, int size) {
    return key % size;
}

int main() {
    int size = 10;
    vector<vector<int>> table(size);  // Each index stores chain of values

    int keys[] = {15, 25, 35, 45};
    int n = sizeof(keys) / sizeof(keys[0]);
    for (int i = 0; i < n; i++) {
        int index = hashFunc(keys[i], size);
        table[index].push_back(keys[i]);
    }

    for (int i = 0; i < size; i++) {
        cout << "Index " << i << ": ";
        for (int val : table[i]) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}

