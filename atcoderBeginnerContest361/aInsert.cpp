#include <bits/stdc++.h>
using namespace std;

void insert(int index, int value);
int a[101], n;
int tmp;

int main(void) {
    int k, x;

    cin >> n >> k >> x;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    };

    insert(k, x);
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << a[n] << endl;

    return 0;
}

void insert (int index, int val) {
        if (index == n){
            a[index] = val;
            return;
        }

        tmp = a[index];
        a[index] = val;
        insert(index+1, tmp);
}