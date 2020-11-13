#include <iostream>
#include <cmath>
#define MAX 100
using namespace std;

int main() {
    int N, M, ch, j=0;
    int a[MAX];
    cin >> N >> M;

    if(M > N)  
        M = M % N;

    for(int i=0; i < N; i++) {
        cin >> ch;
        if(i < N - M)
            a[i + M] = ch;
        else
            a[j++] = ch;    
    }

    for(int i=0; i < N - 1; i++)
        cout << a[i] << " ";
    cout << a[N - 1] << endl;

    return 0;
}
