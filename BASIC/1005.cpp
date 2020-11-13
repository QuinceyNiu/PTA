#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int n, temp, flag=0;
    cin >> n;
    vector<int> m(n);
    for(int i = 0; i < n; i++) {
        cin >> temp;
        m[i] = temp;
    }

    for(int i = 0; i < n; i++) {
        if(m[i]) {
            temp = m[i];
            while(temp != 1) {
                if(temp%2 == 1)
                    temp = 3*temp + 1;
                temp /= 2;
                for(int j = 0; j < n; j++) {
                    if(temp == m[j] && m[j] != 0)
                        m[j] = 0;
                }
            }
        }
    }
    sort(m.begin(), m.end(), cmp);
    for(int i=0; i < n; i++) {
        if(m[i]) {
            if(flag==1)
                cout << " ";
            cout << m[i];
        }
        flag = 1;
    }
    return 0;
}




/*未通过提交
#include <iostream>
#include <algorithm>
#include <string>
#define MAX 105
using namespace std;

int main() {
    int n, x, num=0;
    int a[MAX];
    cin >> n;
    for(int i = 0; i < n; i++) 
        cin >> a[i];
    for(int i = 0; i < n; i++) {
        x = a[i];
        while(x != 1) {
            x = (x%2==0)?x/2:(3*x+1)/2;
            for(int k = 0; k < n; k++) {
                if(x == a[k]){
                    a[k] = 1;
                    break;
                }
            }
        }
    }
    sort(a, a+n);
    for(int i=n-1; i > 0; i--) {
        if(a[i] != 1) {
            cout << a[i];
            if(a[i-1] != 1)
                cout << " ";
            else
                break;
        }
        return 0;
    }
}
*/