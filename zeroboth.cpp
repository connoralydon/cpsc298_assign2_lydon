#include <iostream>
#include <array>
#include <string>

using namespace std;


void zeroBoth(int & a, int & b){
  a = 0;
  b = 0;
}


int main (int argc, char **argv){
   int x = 10;
   int y = 100;

   cout << "x" << x << endl;
   cout << "y" << y << endl;

   zeroBoth(x,y);
   cout << endl;

   cout << "x" << x << endl;
   cout << "y" << y << endl;
}
