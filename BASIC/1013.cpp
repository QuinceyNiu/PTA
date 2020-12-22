#include<iostream>
#include<cmath>
using namespace std;

int IsPrime(int b);    //判断是否为素数

int main()
{
    int M, N, a = 0, b = 2, count = 0;
    cin >> M >> N;
    while(a < N){
        if(IsPrime(b)){
            a++;    //a用来记录现在是第几个素数
            if(a >= M){
                cout << b;
                count++;    //count用来记录已经输出多少个素数
                if(count % 10 == 0){
                    cout << "\n";
                }
                else if(a != N){
                    cout << " ";
                }
            }
        }
        b++;
    }
}

int IsPrime(int b){
    int flag = 1;
    for(int i = 2; i <= sqrt(b); i++){
        if(b % i == 0){
            flag = 0;
            break;
        }
    }
    return flag;
}