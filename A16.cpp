#include<iostream>
using namespace std;

int main(){
    int N;
    cin>> N;
    int A[N];
    int B[N];
    for (int i=0; i<N-1;i++){
        cin >>A[i];
    }
    for (int i=0; i<N-2;i++){
        cin >>B[i];
    }

    int dp[N];
    dp[0] = 0;
    dp[1] = A[0];

    for (int i=2; i < N;i++){
        dp[i] = min((dp[i-2] + B[i-2]),(dp[i-1] + A[i-1]));
        // cout << dp[i] << endl;
    }

    cout << dp[N-1] << endl;
    return 0;
}