#include <iostream>
using namespace std;

int table[10];

int main() {
    for (int i = 0; i < 10; i++)
        table[i] = -1;

    int keys[] = {15, 25, 35, 45};
    int n = sizeof(keys)/sizeof(keys[0]);

    for (int i = 0; i < n; i++) {
        int key = keys[i];
        int index = key % 10;

        while (table[index] != -1) {
            index = (index + 1) % 10;
        }

        table[index] = key;
    }

    for (int i = 0; i < 10; i++) {
        cout <<"index "<< i << ": ";
        if (table[i] == -1)
            cout << "Empty";
        else
            cout << table[i];
        cout << endl;
    }

    return 0;
}