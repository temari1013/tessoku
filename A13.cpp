#include<iostream>
using namespace std;

int N,K;
int R[100009];

int calc_ans(int pointer , int arr[] , int length){
    int printer_ans = 0;
    for(int i=0;i< length; i++){
        printer_ans += pointer /arr[i];
    }
    return printer_ans;
}

int main(){
    cin >> N >> K;
    int A[N];
    for(int i=1;i<N;i++){
        cin >>A[i];
    }

    long long  ans = 0;
    // 差がK以下になるように選ぶ
    for (int i=1;i<= N-1;i++){
        if (i == 1)R[i] = 1;
        else R[i] = R[i-1];

        while(R[i] < N && A[R[i] +1]-A[i]<= K){
            R[i]+= 1;
        }
    }

    for (int i=1; i<=N-1;i++){
        ans +=R[i]-i;
    }
    cout << ans << endl;
    return 0;
   
}