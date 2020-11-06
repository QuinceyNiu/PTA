#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    string max_name = "", min_name = "", max_id = "", min_id = "";
    int max = 0, min = 101;
    for(int i = 0; i < n; i++) {
        string temp1, temp2;
        int temp3;
        cin >> temp1 >> temp2 >> temp3;
        if(temp3 > max) {
            max = temp3;
            max_id = temp2;
            max_name = temp1;
        }
        if(temp3 < min) {
            min = temp3;
            min_id = temp2;
            min_name = temp1;
        }
    }
    cout << max_name << " " << max_id << endl;
    cout << min_name << " " << min_id;
    return 0;
}