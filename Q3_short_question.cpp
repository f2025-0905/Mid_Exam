#include <iostream>
using namespace std;

int main() {
    float houseOneArea, houseOnePrice, houseTwoArea, houseTwoPrice, houseThreeArea, houseThreePrice;
    
    cout << "Enter House One base price: ";
    cin >> houseOnePrice;
    cout <<"Enter House One built area: ";
    cin >> houseOneArea;
    
    cout << "Enter House Two base price: ";
    cin >> houseTwoPrice;
    cout <<"Enter House Two built area: ";
    cin >> houseTwoArea;
    
    cout << "Enter House Three base price: ";
    cin >> houseThreePrice;
    cout <<"Enter House Three built area: ";
    cin >> houseThreeArea;
    
    
    float HouseA = houseOnePrice/houseOneArea;
    float HouseB = houseTwoPrice/houseTwoArea;
    float HouseC = houseThreePrice/houseThreeArea;
    
    if (HouseA < HouseB && HouseA < HouseC){
        cout << "House One has least price per built in area.\n";
    } else if (HouseA < HouseB && HouseA > HouseC){
        cout << "House Three has least price per built in area.\n";
    } else {
        cout << "House two has least price per built in area.\n";
    }
    
    cout << "Price per sq.ft of House A: " << HouseA << endl;
    cout << "Price per sq.ft of House B: " << HouseB << endl;
    cout << "Price per sq.ft of House C: " << HouseC << endl;
    
    return 0;
}