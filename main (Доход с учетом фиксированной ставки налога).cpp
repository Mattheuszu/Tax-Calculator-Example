/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class TaxCalculator {
    
public:
    static double income;
    static double taxRate;

    static double calculateIncomeTax();
};

double TaxCalculator::income = 25000.0;
double TaxCalculator::taxRate = 0.17;

double TaxCalculator::calculateIncomeTax() { return income * taxRate; }

int main() {
    
    cout << TaxCalculator::income << endl;
    cout << TaxCalculator::taxRate << "%" << endl;
    
    cout << TaxCalculator::calculateIncomeTax();

    /*cout << income << endl;
    cout << (taxRate * 100) << "%" << endl;
    cout << incomeTax << endl;*/

    return 0;
}