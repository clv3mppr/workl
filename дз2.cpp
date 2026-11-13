#include <iostream>
using namespace std;

int main() {
    const double KG_PER_LB = 0.453592;
    const double CM_PER_IN = 2.54;

    double lb;
    cin >> lb;
    cout << "Weight in pounds: " << lb << endl;
    cout << "Weight in kg: " << lb * KG_PER_LB << endl;

    double in;
    cin >> in;
    cout << "Height in inches: " << in << endl;
    cout << "Height in cm: " << in * CM_PER_IN << endl;
    return 0;
}