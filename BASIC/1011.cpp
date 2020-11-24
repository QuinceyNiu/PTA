// https://pintia.cn/problem-sets/994805260223102976/problems/994805312417021952

#include <iostream>
using namespace std;
int main() {
    int n;
    double a, b, c;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a >> b >> c;
        if(a + b > c)
            cout << "Case #" << i << ": true" << endl;
        else
            cout << "Case #" << i << ": false" << endl;
    }
}