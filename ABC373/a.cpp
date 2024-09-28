#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s[12];
    int count = 0;

    for (int i; i<12; i++){
        cin >> s[i];
        if (s[i].length() == i+1){
            count++;
        }
    }

    cout << count;    
}