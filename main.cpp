#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int totalCustomers;
    double energyDrinkPercentage;
    double citrusPreferencePercentage;
    
    cout << "Energy Drink Survey Calculator" << endl;
    cout << "========================================" << endl;
    cout << endl;
    
    cout << "Enter the total number of customers surveyed: ";
    cin >> totalCustomers;
    
    cout << "Enter the percentage who purchase energy drinks (e.g., 15 for 15%): ";
    cin >> energyDrinkPercentage;
    energyDrinkPercentage /= 100.0;
    
    cout << "Enter the percentage who prefer citrus flavor (e.g., 58 for 58%): ";
    cin >> citrusPreferencePercentage;
    citrusPreferencePercentage /= 100.0;
    
    double customersBuyingEnergyDrinks = totalCustomers * energyDrinkPercentage;
    double customersPreferringCitrus = customersBuyingEnergyDrinks * citrusPreferencePercentage;
    
    cout << endl << "Energy Drink Survey Results" << endl;
    cout << "========================================" << endl;
    cout << endl << "Total customers surveyed: " << totalCustomers << endl;
    cout << endl << "Customers purchasing energy drinks per week:" << endl;
    cout << "  " << fixed << setprecision(0) << customersBuyingEnergyDrinks 
         << " customers (" << setprecision(1) << (energyDrinkPercentage * 100) << "%)" << endl;
    cout << endl << "Customers preferring citrus-flavored energy drinks:" << endl;
    cout << "  " << setprecision(0) << customersPreferringCitrus 
         << " customers (" << setprecision(1) << (citrusPreferencePercentage * 100) 
         << "% of energy drink buyers)" << endl;
    cout << endl << "========================================" << endl;
    
    return 0;
}
