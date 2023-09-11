#include "myarray.h"
#include <iostream>
#include <fstream>
#include <stdexcept> // Include the standard exception header

MyArray::MyArray() {
    size = 0;
    data = nullptr;
}

MyArray::~MyArray() {
    delete[] data;
}

bool MyArray::readFromFile(const char* filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return false;
    }

    int value;
    while (file >> value) {
        if (size == 0) {
            data = new int[1];
        } else {
            int* temp = new int[size + 1];
            for (int i = 0; i < size; ++i) {
                temp[i] = data[i];
            }
            delete[] data;
            data = temp;
        }

        data[size++] = value;
    }

    file.close();
    return true;
}

int MyArray::find(int value) {
    for (int i = 0; i < size; ++i) {
        if (data[i] == value) {
            return i;
        }
    }
    return -1; // Return -1 if not found
}

std::pair<int, int> MyArray::modify(int index, int newValue) {
    try {
        if (index >= 0 && index < size) {
            std::pair<int, int> result(data[index], newValue);
            data[index] = newValue;
            return result;
        } else {
            throw std::out_of_range("Index is out of range."); // Throw an exception if index is out of bounds
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return std::make_pair(-1, -1);
    }
}

void MyArray::add(int newValue) {
    try {
        int* temp = new int[size + 1];
        for (int i = 0; i < size; ++i) {
            temp[i] = data[i];
        }
        temp[size++] = newValue;
        delete[] data;
        data = temp;
    } catch (const std::bad_alloc& e) {
        std::cerr << "Error: Memory allocation failed." << std::endl;
    }
}

void MyArray::replace(int index, int value) {
    if (index >= 0 && index < size) {
        data[index] = value;
    }
}
