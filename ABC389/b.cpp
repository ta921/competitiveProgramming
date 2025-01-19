#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
using namespace std;

int main(void) {
    int x;

    cin >> x;

    int n = 1, now = 1;
    

    while (true)
    {
        if (now == x){
            cout << n;
            break;
        }

        n+=1;
        now *= n;
    }

}