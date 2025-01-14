//TLE

#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
using namespace std;

int main(void) {
    int a[500000];
    int n;

    int count = 0;

    cin >> n;

    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if (2*a[i] <= a[j]) count++;
        }
    }

    cout << count;
}