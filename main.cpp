#include <iostream>
#include "Calculator.h"

using namespace std;

int main() {
    Calculator calc;
    
    cout << "Choose a function:\n";
    cout << "1) plus\n";
    cout << "2) minus\n";
    cout << "3) divide\n";
    cout << "4) multiply\n";
    cout << "5) exit\n";
    
    int choice;
    float valueA;
    float valueB;
    
    cout << "> ";
    cin >> choice;
    
    if (choice == 5) return 0;
    
    cout << "------------------\n";
    cout << "Enter value A: ";
    cin >> valueA;
    cout << "Enter value B: ";
    cin >> valueB;
    
    switch (choice) {
        case 1:
            cout << "Answer: " << calc.plus(valueA, valueB) << "\n";
            break;
        case 2:
            cout << "Answer: " << calc.minus(valueA, valueB) << "\n";
            break;
        case 3:
            cout << "Answer: " << calc.divide(valueA, valueB) << "\n";
            break;
        case 4:
            cout << "Answer: " << calc.multiply(valueA, valueB) << "\n";
            break;
    }
    
    system("pause");
}
