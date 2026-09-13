#include<bits/stdc++.h>
using namespace std;
int main (){
    int ans = 0;

    int N = 0; 
    cin >> N;
    char T ;
    int A = 0;
    for (int i = 0; i<N; i++){
        cin >> T;
        cin >> A;
        if (T == '+'){
            ans += A;

        }else if (T == '-'){
            ans -= A;
        }else if (T == '*'){
            ans *= A;

        }
        if (ans < 0){
            ans += 10000;
        }
        
        ans %= 10000;
        cout << ans << endl;

    }
}