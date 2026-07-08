#include<iostream>
using namespace std;

int main(){
    int N , X ;
    cin >> N >> X;
    int A[N];

    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    
    int pointer = N/2;
    int left = 0;
    int right = N - 1;

    // cout << "hello" << endl;

    while (A[pointer] != X){
        if (A[pointer] > X){
             right = pointer - 1;
             pointer = (left + right) /2;
            
        }else  {
 
            left = pointer  + 1;
            pointer = (left + right) /2;

        }
    }
    cout << pointer + 1 << endl;
}