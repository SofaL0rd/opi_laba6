
#include <iostream>
#include "stdio.h"
#include <iomanip>
#include "math.h"
using namespace std; 

int main()
{
 float minX, maxX, h, x;
double y;
cout << "Введіть початкове значення, кінцеве значення та крок\n"; 
cin >> minX >> maxX >> h;
x = minX;

do{
    y = pow(x,1/2.) + 3 * fabs(x) + pow(x,2);
    cout << setw(10) << left << x << setw(7)<< right << y << endl;
    x += h;
}while(x <= maxX+h);

    return 0;
}
