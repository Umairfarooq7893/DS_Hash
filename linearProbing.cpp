#include <iostream>
using namespace std;

int table[10];

int main() {
    // initialize table with -1 (empty)
    for (int i = 0; i < 10; i++)
        table[i] = -1;

    int keys[] = {15, 25, 35, 45};

    for (int i = 0; i < 4; i++) {
        int key = keys[i];
        int index = key % 10;

        // linear probing
        while (table[index] != -1) {
            index = (index + 1) % 10;  // move to next slot
        }

        table[index] = key;
    }

    // display table
    for (int i = 0; i < 10; i++) {
        cout << i << ": ";
        if (table[i] == -1)
            cout << "Empty";
        else
            cout << table[i];
        cout << endl;
    }

    return 0;
}