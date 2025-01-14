#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
using namespace std;

int main(void) {
    int n, d;
    cin >> n >> d;
    int t[100], l[100];
    std::vector<int> w(100, 0);

    for (int i=0; i<n; i++){
        cin >> t[i] >> l[i];
    }

    for (int k=1; k<=d; k++){
        for (int i=0; i<n; i++){
            w[i] = (l[i]+k)*t[i];
        }
        cout << *std::max_element(w.begin(), w.end()) << endl;
    }

}