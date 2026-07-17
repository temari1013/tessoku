#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int N,S;
     cin >> N >> S;
     int A[N];
     bool dp[N + 2][S + 2 ];
     for(int i=0; i<N+2; i++){
        for(int j=0; j<S+2; j++){
            dp[i][j] = false;
        }
     }
     for(int i=0; i<N; i++){
        cin >>A[i];
     }

     dp[0][0] = true;

     for (int i=1; i<S; i++){
        dp[0][i] = false;
     }

     for (int i=1; i< N + 1; i++){
        for (int j=0; j<S + 1; j++){
            if (j < A[i-1]) {
                dp[i][j] = dp[i-1][j];
            } else {
                if (dp[i-1][j]){
                    dp[i][j] = true;
                } else if (dp[i-1][j-A[i-1]]){
                     dp[i][j] = true;
                } else  dp[i][j] = false;
            }
        }
     }
     if (dp[N][S]){
        cout << "Yes" << endl;
     }else cout << "No" << endl;

}