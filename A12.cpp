#include<iostream>
using namespace std;

int N,K;
int calc_ans(int pointer , int arr[] , int length){
    int printer_ans;
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
    int right = 10 ^ 9;
    int pointer = (left + right) /2; 
    int ans = calc_ans(pointer ,A ,N);

    while ( ans != K){
        if(ans < K){
            // もっと遅い時間を見る
            left = pointer ;
            pointer = (left + right) /2; 
        }else{
            right = pointer;
            pointer = (left + right) /2; 
        }
       int ans = calc_ans(pointer ,A ,N);
    }
}