// https://pintia.cn/problem-sets/994805260223102976/problems/994805311146147840
/* ERROR
#include <iostream>
#include <iomanip>
#define MAX 1000
using namespace std;
int main() {
    int N, flag=0, A1=0, A2, count3=0, count4=0, total4=0, avg4, max5=0; 
    int a[MAX];
    cin >> N;
    for(int i = 0; i < N; i++)
        cin >> a[i];
    for(int i = 0; i < N; i++){
        if(i % 5 == 0 && i % 2 == 0)
            A1 += i;
        if(i % 5 == 1) {
            if(flag == 0) {
                A2 += i;
                flag = 1;
            }
            else if(flag == 1) {
                A2 -= i;
                flag = 0;
            }
        }
        if(i % 5 == 2)
            count3 += 1;
        if(i % 5 == 3) {
            total4 += i;
            count4 += 1;
        }
        if(i % 5 == 4) {
            if(i > max5)
                max5 = i;
        }
    }
    avg4 = total4 / count4;
    cout << A1 << " " << A2 << " " << count3 << " ";
    cout << setiosflags(ios::fixed) << setprecision(1);
    cout << avg4 << " ";
    cout << max5 << endl;
}*/

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, num, A1 = 0, A2 = 0, A5 = 0;
    double A4 = 0.0;
    cin >> n;
    vector<int> v[5];
    for (int i = 0; i < n; i++) {
        cin >> num;
        v[num%5].push_back(num);
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (i == 0 && v[i][j] % 2 == 0) A1 += v[i][j];
            if (i == 1 && j % 2 == 0) A2 += v[i][j];
            if (i == 1 && j % 2 == 1) A2 -= v[i][j];
            if (i == 3) A4 += v[i][j];
            if (i == 4 && v[i][j] > A5) A5 = v[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        if (i != 0) printf(" ");
        if (i == 0 && A1 == 0 || i != 0 && v[i].size() == 0) {
            printf("N"); continue;
        }
        if (i == 0) printf("%d", A1);
        if (i == 1) printf("%d", A2);
        if (i == 2) printf("%d", v[2].size());
        if (i == 3) printf("%.1f", A4 / v[3].size());
        if (i == 4) printf("%d", A5);
    }
    return 0;
}