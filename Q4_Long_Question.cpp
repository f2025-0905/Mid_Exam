#include <iostream>
using namespace std;

int main() {
    float populationA, rateA, populationB, rateB;
    
    cout << "Enter current population of Town A: ";
    cin >> populationA;
    
    cout << "Enter population growth rate (%) of Town A: ";
    cin >> rateA;
    
    cout << "Enter population of Town B: ";
    cin >> populationB;
    
    cout << "Enter population growth rate (%) of Town B: ";
    cin >> rateB;
    
    int countYear = 0;
    
    while (populationA >= populationB){
        populationA = populationA+populationA*(rateA/100);
        populationB = populationB+populationB*(rateB/100);
        countYear++;
    }
    cout << "After " << countYear << " years " << "Population of Town A will be greater then or equal to population of Town B.\n";
    cout << "Population After " << countYear << " Years: \n";
    
    cout << "Town A: " << populationA << endl;
    cout << "Town B: " << populationB << endl;
    
    
    return 0;
}