#ifndef MYARRAY_H
#define MYARRAY_H
#include <stdexcept> // Include the standard exception header


class MyArray {
public:
    MyArray(); // Constructor
    ~MyArray(); // Destructor
    bool readFromFile(const char* filename); // Function to read data from a file
    int find(int value); // Function to find an integer and return its index
    std::pair<int, int> modify(int index, int newValue); // Function to modify an integer
    void add(int newValue); // Function to add a new integer to the end
    void replace(int index, int value); // Function to replace or remove an integer

private:
    int* data; // Dynamic array to store integers
    int size; // Current size of the array
};

#endif
