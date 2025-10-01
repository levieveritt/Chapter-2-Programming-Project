#include <iostream>
#include <string>

using namespace std;

int main() {
    // Relevant data: tank size, MPG in town, MPG on highway
    double tankSize;
    double mpgTown;
    double mpgHighway;

    cout << "Gas Tank Mileage Calculator" << endl;
    cout << "========================================" << endl;
    cout << " " << endl;
    cout << "Enter the tank size (in gallons): ";
    cin >> tankSize;

    cout << "Enter the MPG in town: ";
    cin >> mpgTown;

    cout << "Enter the MPG on the highway: ";
    cin >> mpgHighway;

    // Formula: distance = gallons * miles per gallon
    double distanceTown = tankSize * mpgTown;
    double distanceHighway = tankSize * mpgHighway;

    // Display results
    cout << "\nDistance you can travel in town: " << distanceTown << " miles" << endl;
    cout << "Distance you can travel on the highway: " << distanceHighway << " miles" << endl;

    return 0;
}