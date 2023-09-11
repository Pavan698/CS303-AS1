# CS303-AS1
Q1) (20 points) Write a C++ program that can read data (let’s say file that has 10 lines, and each line
contains 10 integers) from a file into an array and perform the following functions:
1) A function to check if a certain integer exists in the array if the number is present return the
index where the number is present.
2) A function that can modify the value of an integer when called with the index of the integer in
the array and return the new value and old value back to the user.
3) A function that adds a new integer to the end of the array
4) A function which intakes an index of an array and replaces the value with either 0 or removes
the integer altogether.

Q2) (5 points) A way to indicate an error, especially if there are several possible errors in code, is
through the use of exceptions. Exceptions are used to signal that an error has occurred. You can insert
code in your program that throws an exception when a particular kind of error occurs. An exception
handler allows the user to catch or handle the exception. To avoid uncaught exceptions, you write a try
block that can throw an exception and follow it with a catch block that catches the exception and
handles it. Using the array code from question 1 perform the following:
1) (Add a try and catch blocks (refer to the slide 53 of chapter 2) to the user inputs for the
following functions from question 1:
▪ A function that can modify the value of an integer when called with the index of
the integer in the array and return the new value and old value back to the user.
▪ A function that adds a new integer to the end of the array.

How to Run:-
1) Compile the Code:
   Install C++ compiler (g++)
   g++ -o myarray main.cpp myarray.cpp
2) Run the program:
  ./myarray
3) Input Data File:
  This program must have an input data file named data.txt. File should exists in the same directory.
4) Screenshots of finding an Integer, modifying an Integer, adding a New Integer, replacing an Integer.
   <img width="449" alt="Screenshot 2023-09-11 at 12 19 32 PM" src="https://github.com/Pavan698/CS303-AS1/assets/123590108/77f8df25-ce4c-446e-b03b-12fe1644c1cc">
5) Error Handling
The program includes error handling using try-catch blocks to handle exceptions gracefully. If any errors occur (e.g., index out of bounds), the program will display an error message.


Pavan Krishna Karri
pkcgb@umsystem.edu
