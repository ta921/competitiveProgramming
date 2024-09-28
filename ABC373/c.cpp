#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    int sumVal = 0;
    int tmp;
    int tmpMax;

    for (int i=0; i<2; i++){
        for (int j=0; j<n; j++){
            cin >> tmp;
            if (j==0){
                tmpMax = tmp;
                continue;
            }
            if (tmp > tmpMax){
                tmpMax = tmp;
            }
        }
        sumVal += tmpMax;
    }

    cout << sumVal;
}