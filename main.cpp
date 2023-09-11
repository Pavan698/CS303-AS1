#include "myarray.h"
#include <iostream>

using namespace std;

int main() {
    MyArray myArray;

    if (myArray.readFromFile("data.txt")) {
        // Use the functions as needed
        int index = myArray.find(42);
        if (index != -1) {
            cout << "Integer 42 found at index " << index << endl;
        } else {
            cout << "Integer 42 not found." << endl;
        }

        pair<int, int> result = myArray.modify(3, 99);
        cout << "Modified integer: " << result.first << " (Old Value) -> " << result.second << " (New Value)" << endl;

        myArray.add(100);
        cout << "Added a new integer: 100" << endl;

        myArray.replace(5, 0);
        cout << "Replaced integer at index 5 with 0" << endl;

        // Update the array, save to file, etc.
    }

    return 0;
}
