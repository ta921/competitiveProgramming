#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
using namespace std;

int main(void) {
    int search(int* bufAddr, int item);
    int sum(int* bufAddr, int len);
    int a[500000];
    int d[500000]{};
    int n;

    int count = 0;

    cin >> n;

    int tmp;
    int now = 0;

    for (int i=0; i<n; i++){
        cin >> tmp;
        for (int j=now; j<tmp; j++){
            if (d[tmp-1] != 0){
                break;
            }
            a[j] = now;
        }

        count += sum(&d[0], search(&a[0], tmp));

        d[tmp-1]++;
        now = tmp;
    }

    cout << count;
}

int search(int* bufAddr, int item) {
        return *(bufAddr+item%2);
}

    int sum(int* bufAddr, int len) {
        if (len !=0){
            return *(bufAddr+len-1)+sum(bufAddr, len-1);
        }else{
            return 0;
        }
}