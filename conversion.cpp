/*
Problem 4 (conversion.cpp): Write a program that will read in a length in feet
and inches and output the equivalent length in meters and centimeters. Use at
least three functions: one for user input, one or more for calculating, and one
for output(console). Include a loop that lets the user repeat this computation
for new input values until the user says he or she wants to end the program
(user has to type exit). There are 0.3048 meters in a foot, 100 centimeters in a
meter, and 12 inches in a foot.
*/

#include <iostream>
#include <string>
#include <vector>


using namespace std;

//output function
void printOutput(int m, double cm){
  cout << "Meters: " << m << endl;
  cout << "Centimenters: " << cm << endl;
}

//calculation functions
void doCalc(int feet, double inches){
  double totalCM;

  totalCM = feet / (1/0.3048) * 100;
  totalCM += ((inches / 12) / (1/0.3048)) * 100;

  int m = totalCM / 100;
  double cm = totalCM - (m * 100);

  printOutput(m, cm);
}

//user input functions
void takeInput(){

  string feetString;
  string inchString;

  int feet;
  double inch;

  string userInput;


  do {
    cout << "Enter \"exit\" to exit, any key to continue." << endl;
    cout << "Enter feet: ";
    cin >> userInput;
    if(userInput != "exit"){
      feet = stoi(userInput);
      cout << "Enter inches: ";
      cin >> userInput;
      if(userInput != "exit"){
        inch = stod(userInput);

        doCalc(feet, inch);
      }
      else {
        break;
      }
    }
    else {
      break;
    }


  } while (userInput != "exit");
}



int main (int argc, char **argv){


  takeInput();

  return 0;
}
