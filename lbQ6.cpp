#include<iostream>
using namespace std;

int main() {
    int numEmployees;
    const double BONUS_RATE = 0.12; // 12% bonus
    
    cout << "Enter the number of employees: ";
    cin >> numEmployees;
    
    cout << "\nEmployee Salary Calculation\n\n";
    
    for (int i = 1; i <= numEmployees; i++) {
        double basicSalary, bonus, netSalary;
        
        cout << "Employee " << i << ":\n";
        cout << "Enter basic salary: ";
        cin >> basicSalary;

        bonus = basicSalary * BONUS_RATE;
        netSalary = basicSalary + bonus;
        
        cout << "  Basic Salary: $" << basicSalary << endl;
        cout << "  Bonus (12%): $" << bonus << endl;
        cout << "  Net Salary: $" << netSalary << endl;
        cout << endl;
    }
    
    return 0;
}
