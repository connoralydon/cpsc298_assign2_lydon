/*
Problem 1 (intarray.cpp): Write a program that will read up to ten nonnegative
integers into an array called numberArray and then write/print the integers back
to the screen (console output). For this exercise you need not use any functions.
*/

#include <iostream>
#include <array>
#include <string>

using namespace std;

int main (int argc, char **argv){

  int size = 10;
  int numberArray [size];
  int num;

  for (int i = 0; i < size; ++i){

    cout << "Enter positive integer: ";
    cin >> num;
     numberArray[i] = num;
  }

  cout << endl;

  for (int i = 0; i < size; ++i){
    cout << "Value: " << numberArray[i] << endl;
  }
}
