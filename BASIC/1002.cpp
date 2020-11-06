#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    string outputs[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    int sum = 0;

    for(int i=0; i < str.length(); i++)
        sum += str[i] - '0';

    string nums = to_string(sum);

    for(int i=0; i < nums.length(); i++) {
        if(i != 0)
            cout << " ";
        cout << outputs[nums[i] - '0'];
    }

    return 0;
}