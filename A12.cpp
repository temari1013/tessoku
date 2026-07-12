#include<iostream>
using namespace std;

int N,K;
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
    for(int i=0;i<N;i++){
        cin >>A[i];
    }

    int left = 0;
    int right = 1e9;
    int pointer = (left + right) /2; 

    int ans = calc_ans(pointer ,A ,N);


    while ( left < right ){
        if(ans <= K){
            // もっと遅い時間を見る
            left = pointer + 1 ;
            pointer = (left + right) /2; 
            // cout << pointer << endl;
            ans = calc_ans(pointer, A ,N);
        }else{
            // もっと早い時間を見る
            right = pointer;
            pointer = (left + right) /2; 
            //cout << "pointer" <<  pointer << endl;
            ans = calc_ans(pointer, A ,N);
        }
    }
    cout << left << endl;
}