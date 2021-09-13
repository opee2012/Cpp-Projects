#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {
    Triangle triangle1;
    Triangle triangle2;

    double userBase = 0;
    double userHeight = 0;

    cin >> userBase;
    cin >> userHeight;
    triangle1.SetBase(userBase);
    triangle1.SetHeight(userHeight);
      
    cin >> userBase;
    cin >> userHeight;
    triangle2.SetBase(userBase);
    triangle2.SetHeight(userHeight);

    cout << "Triangle with larger area:" << endl;
   
    // TODO: Determine larger triangle (use GetArea())
    if (triangle1.GetArea() > triangle2.GetArea())
        triangle1.PrintInfo();
    else
        triangle2.PrintInfo();
   
    return 0;
}