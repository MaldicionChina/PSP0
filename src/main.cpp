#include <iostream>
#include "LinkedList.hpp"

using namespace std;

int main() {
    LinkedList realNumbers;
    double number = 0;
    int totalNumbers = 0;
    cout << "Enter n real numbers to calculate mean and standard desviation" << endl;
    cout << "Enter total numbers to read: ";
    cin >> totalNumbers;

    for (int i = 1; i <= totalNumbers; ++i) {
        cout << "["<<i<<"] :";
        cin >> number;
        realNumbers.addData(number);
    }

    cout<< " Mean : " << realNumbers.getMean() << endl;
    cout<< " Std. Dev : " << realNumbers.getVariance() << endl;

    return 0;
}