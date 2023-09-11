#include "myarray.h"
#include <iostream>
#include <stdexcept> // Include the standard exception header

int main() {
    MyArray myArray;

    if (myArray.readFromFile("data.txt")) {
        // Use the functions as needed
        int index = myArray.find(42);
        if (index != -1) {
            std::cout << "Integer 42 found at index " << index << std::endl;
        } else {
            std::cout << "Integer 42 not found." << std::endl;
        }

        std::pair<int, int> result = myArray.modify(3, 99);
        std::cout << "Modified integer: " << result.first << " (Old Value) -> " << result.second << " (New Value)" << std::endl;

        myArray.add(100);
        myArray.replace(5, 0);

        // Update the array, save to file, etc.
    }

    return 0;
}
