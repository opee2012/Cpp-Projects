#include <iostream>
#include <iomanip>               // For setprecision

using namespace std;

double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon);

double milesPerGallon, dollarsPerGallon;

int main() {
   double totalCost;
   
   cout << "Enter you vehicle's MPG:  ";
   cin >> milesPerGallon;
   cout << "Enter the cost of fuel per gallon:  ";
   cin >> dollarsPerGallon;
   
   cout << fixed << setprecision(2) << "\nCost driving 10 miles:  ";
   totalCost = DrivingCost(10,milesPerGallon,dollarsPerGallon);
   cout << totalCost << "\nCost driving 50 miles:  ";
   totalCost = DrivingCost(50,milesPerGallon,dollarsPerGallon);
   cout << totalCost << "\nCost driving 400 miles: ";
   totalCost = DrivingCost(400,milesPerGallon,dollarsPerGallon);
   cout << totalCost << endl;

   return 0;
}

double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon) {
   double total;
   
   total = (drivenMiles / milesPerGallon) * dollarsPerGallon;

    return (total);
}