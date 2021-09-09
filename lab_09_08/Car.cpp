#include <iostream>
#include <math.h>
#include "Car.h"
using namespace std;

void Car::SetModelYear(int userYear){
   modelYear = userYear;
}

int Car::GetModelYear() const {
   return modelYear;
}

// TODO: Implement SetPurchasePrice() function

// TODO: Implement GetPurchasePrice() function

void Car::CalcCurrentValue(int currentYear) {
   double depreciationRate = 0.15;
   int carAge = currentYear - modelYear;
      
   // Car depreciation formula
   currentValue = (int) 
      round(purchasePrice * pow((1 - depreciationRate), carAge));
}

// TODO: Implement PrintInfo() function to output modelYear, purchasePrice, and 
// currentValue