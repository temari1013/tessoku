#include<bits/stdc++.h>

using namespace std;
int gcd(int a, int b){
    // a < b に揃える
    if (a > b){
        swap(a,b);
    }
    if (b%a == 0) return a;

    return gcd(a, b-a);
}

int main(){
    int A , B;
    cin >> A>>B;
    cout << gcd(A,B) << endl;
    return 0;
}