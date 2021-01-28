/*
Problem 3 (salestax.cpp): Implement a function called addTax. The function
addTax has two formal parameters: taxRate (float), which is the amount of sales
tax expressed as a percent; and cost (float), which is the cost of an item
before tax. The function returns the value (float) of cost so that it includes
sales tax.
*/


#include <iostream>
#include <string>

using namespace std;

float addTax(float taxRate, float cost){
  float total;

  if (taxRate > 1){ //to adjust for how people insert different tax rates
    taxRate /= 100;
  }

  total = cost + (cost * taxRate);

  return total;
}

int main (int argc, char **argv){

  float price = 4.00;
  float tax = 0.10;

   float total = addTax(tax, price);

   cout << "Total: $" << total << endl;

   return 0;
}
