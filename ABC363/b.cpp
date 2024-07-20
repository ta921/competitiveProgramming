#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N,T,P;
    int L[100];

    int tmp = 0;

    cin >> N >> T >> P;
    for (int i=0; i<N; i++){
        cin >> L[i];
    }

    for (int i=0; i<100; i++){
        
        for (int j=0; j<N; j++){
            if (L[j] >= T){
                tmp++;
            }
            L[j]++;
        }

        if(tmp >= P){
            cout << i << endl;
            break;
        }else{
            tmp = 0;
        }
    }
}