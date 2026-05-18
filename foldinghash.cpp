#include <iostream>
using namespace std;
int hash_folding(int key, int size) {
    int sum = 0;
    while (key > 0) {
        sum += key % 100;  
        key /= 100;       
        return sum % size;
    }
}
int main() {
    int keys[] = {12345, 67890, 24680};
    int size = 10;
    int n = sizeof(keys) / sizeof(keys[0]);
    int hash_values[n];
    for (int i = 0; i < n; i++) {
        hash_values[i] = hash_folding(keys[i], size);
    }
    cout << "Folding Hash Values: ";
    for (int i = 0; i < n; i++) {
        cout << hash_values[i] << " ";
    }
    cout << endl;
    return 0;
}

