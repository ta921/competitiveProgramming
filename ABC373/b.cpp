#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
using namespace std;

int main(void) {
    string keyboard;
    int count = 0;
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cin >> keyboard;

    int now = keyboard.find("A");

    for (int i=0; i<26; i++){
        int distant = keyboard.find(s[i])-now;
        count += abs(distant);
        now += distant;
    }

    cout << count;    
}