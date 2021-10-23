

#include <iostream>
#include "stdio.h" 
#include "windows.h"
#include <iomanip>
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /* float x, Y, sum, Z, y;
     cout << "Input x " << endl;
      cin >> x;
      sum = 0;
      for (int i = 1; i < 11;i++) {
          sum += i;

      }
      Y = sin(x) + 2 * log(sum);
      cout << "Y= " << setprecision(2) << Y << endl;
      */

    /*cout << "Input y " << endl;
    cin >> y;
    Z = 0;
    for (int i = 1; i < 11; i++) {
        Z *= i;

    }
    if ((y*y-4)!=0) {
        Z = (Z + 2 * cos(y)) / (y * y - 4);
        cout << "Z= " << setprecision(3) << Z << endl;
    }
    else {
        cout << "nepravil`no" << endl;
    }*/
    float x, Y, sum;
    cout << "Input x " << endl;
    cin >> x;
    sum = 0;
    for (int i = 1; i < 7; i++) {
        sum += i;

    }
    Y = sin(x) + 2 * log(sum);
    cout << "Y= " << setprecision(2) << Y << endl;
}

