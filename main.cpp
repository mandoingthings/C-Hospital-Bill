#include <iostream>
#include <string>
using namespace std;

int main() {
    const int NUM_SALSA_TYPES = 5;
    string salsaNames[] = {"mild", "medium", "sweet", "hot", "zesty"};
    int jarsSold[NUM_SALSA_TYPES] = {0};
    int totalSales = 0;

    for (int i = 0; i < NUM_SALSA_TYPES; i++) {
        cout << "Enter jars sold for " << salsaNames[i] << ": ";
        cin >> jarsSold[i];
        totalSales += jarsSold[i];
    }

    int maxSales = jarsSold[0];
    int minSales = jarsSold[0];
    string highSeller = salsaNames[0];
    string lowSeller = salsaNames[0];

    for (int i = 1; i < NUM_SALSA_TYPES; i++) {
        if (jarsSold[i] > maxSales) {
            maxSales = jarsSold[i];
            highSeller = salsaNames[i];
        }
        if (jarsSold[i] < minSales) {
            minSales = jarsSold[i];
            lowSeller = salsaNames[i];
        }
    }

    cout << "Salsa Sales Report" << endl;
    cout << "Names      Jars Sold" << endl;
    cout << "_____________________" << endl;
    for (int i = 0; i < NUM_SALSA_TYPES; i++) {
        cout << salsaNames[i] << ": " << jarsSold[i] << endl;
    }

    cout << "Total Sales: " << totalSales << endl;
    cout << "High Seller: " << highSeller << endl;
    cout << "Low Seller: " << lowSeller << endl;

    

    return 0;
}
