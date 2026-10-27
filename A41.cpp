#include<iostream>

using namespace std;

int main(){
    int  N ;
    cin >> N;

    char S[N];
    string tmp;
    cin >> tmp;

    for (int i=0; i<N; i++){
         S[i] = tmp[i];
    }

    bool ans = false;

    for (int i=0; i< N; i++){
        if (S[i] == 'R' && S[i+1] == 'R' && S[i + 2] == 'R') ans = true;
        if (S[i] == 'B' && S[i+1] == 'B' && S[i + 2] == 'B') ans = true;
    }
    
    if (ans == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0 ;

}