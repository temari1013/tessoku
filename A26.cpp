#include<bits/stdc++.h>

using namespace std;

bool is_sosuu(int k){
    for (int i=2; i*i <= k; i++){
        if (k%i == 0) return false;
    }
    return true;
}

int main (){
    int q, x;
    cin >> q;
    for (int i = 0; i<q; i++){
        cin >> x;
        if (is_sosuu(x)){
            cout << "Yes" << endl;
        }else cout << "No" << endl;
    }
    return 0;
}