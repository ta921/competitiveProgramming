#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
using namespace std;

//TLE
int main(void) {
    int n, m;
    int a[200000], b[200000];
    
    cin >> n >> m;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int i=0; i<m; i++){
        cin >> b[i];

        for (int j=0; j<n; j++){
            if (a[j] <= b[i]){
                cout << j+1 << endl;
                break;
            }

            if (j+1==n){
                cout << (-1) << endl;
            }
        }
    }
}