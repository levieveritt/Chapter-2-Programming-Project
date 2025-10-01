#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double RISE_RATE = 1.5;

    double riseAfter5Years = RISE_RATE * 5;
    double riseAfter7Years = RISE_RATE * 7;
    double riseAfter10Years = RISE_RATE * 10;

    cout << "Ocean Level Rise Projections" << endl;
    cout << "========================================" << endl;
    cout << fixed << setprecision(1);
    cout << "\nAnnual rise rate: " << RISE_RATE << " mm/year" << endl;
    cout << "\nProjected ocean level rise:" << endl;
    cout << "  After 5 years:  " << riseAfter5Years << " mm" << endl;
    cout << "  After 7 years:  " << riseAfter7Years << " mm" << endl;
    cout << "  After 10 years: " << riseAfter10Years << " mm" << endl;
    cout << "\n========================================" << endl;

    return 0;
}