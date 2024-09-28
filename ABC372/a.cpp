#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string S;
https://atcoder.jp/contests/abc372/custom_test
    cin >> S;

    S.erase(remove(S.begin(),S.end(),'.'),S.end());
    cout << S;
}