#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int hundreds = n / 100;
    int tens = n % 100 / 10;
    int units = n % 10;
    
    for(int i = 0; i < hundreds; i++) {
        cout << "B";
    }
    for(int j = 0; j < tens; j++) {
        cout << "S";
    }
    for(int k = 1; k <= units; k++) {
        cout << k;
    }
    
    return 0;
}