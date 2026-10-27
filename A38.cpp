#include<iostream>
using namespace std;

int main() {
    int D,N;
    cin >> D>> N;
    int L[N];
    int R[N];
    int H[N];

    int WT[D];
    for (int i = 0; i<D; i++){
        WT[i] = 24;
    }
    // 初期化と更新
    for(int i= 0;i<N;i++){
        cin >>L[i] >> R[i]>>H[i];
        
        // WTは0インデックスの日付なのでL,Rは都度1を引いて扱う
        for (int j= L[i]-1; j<= R[i]-1; j++){
            WT[j] =min(WT[j],H[i]);
            
        }
    }

    int ans = 0;
    for (int i = 0; i<D; i++){
        //cout << WT[i] << endl;
        ans += WT[i];
    }
    cout << ans << endl;
}