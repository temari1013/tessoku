#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i<N; i++){
        cin >> A[i];
    }

    long long cnt[109];
    for (int i = 1; i<=100; i++) cnt[i] =0;
    for (int i = 0; i<N; i++) cnt[A[i]] += 1;

    long long  ans = 0;
    for (int i = 1 ; i<= 100; i++){
        ans += cnt[i] * (cnt[i] -1) * (cnt[i] -2) /6;
    }
    cout << ans << endl;
}
