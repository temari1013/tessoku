#include<bits/stdc++.h>

using namespace std;

int main(){
    int N, W;
    cin >> N >> W;
    int weight[N];
    int value[N];
    
    for(int i=0; i<N;i++){
        cin >> weight[i] >> value[i];
    }

    // Nこ、重さWまでの中で最大のvがdp[N][W]に格納される
    int dp[N + 1][W + 1];

    for (int i=0; i<N +1; i++){
        for (int j = 0; j<W+1; j++){
            // 全要素を0で初期化
            dp[i][j] = 0;
        }
    }

    for (int i =1; i<N + 1; i++){
        for (int j=0; j<W+1; j++){
            if (weight[i-1] <= j){
                  dp[i][j] = max(dp[i-1][j-weight[i-1]] + value[i-1] , dp[i-1][j]);
            }else {
                dp[i][j] = dp[i-1][j];
            }  
        }
    }
    cout << dp[N][W] << endl;
}