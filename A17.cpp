#include<iostream>
#include<vector>

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

    // route[i]にはiに至る直前の部屋が記録される
    int route[N];
    route[0] = -1;
    route[1] = 0;

    dp[0] = 0;
    dp[1] = A[0];

    for (int i=2; i < N;i++){
        dp[i] = min((dp[i-2] + B[i-2]),(dp[i-1] + A[i-1]));
        if((dp[i-2] + B[i-2]) <= (dp[i-1] + A[i-1]) ) {
            route[i] = i-2;
        }else route[i] = i-1;
        // cout << dp[i] << endl;
    }

    // cout << dp[N-1] << endl;

    // 復元を行う
    vector<int> backtrace = {};
    // 最後の部屋からスタート
    int pointer = N-1;
    backtrace.insert(backtrace.begin() ,pointer);
    // 最初の部屋に戻ってくるまで繰り返す
    while (pointer > 0){
        pointer = route[pointer];
        backtrace.insert(backtrace.begin() ,pointer);
    }
    cout << backtrace.size() << endl;

    for (int i=0; i<backtrace.size();i++){
        cout << backtrace[i] + 1 << " ";
    } 
    return 0;
}