#include <bits/stdc++.h>
using namespace std;
int divide3(int tmp);
int b;

int main(void) {
    int m;
    int n;
    int a[20];

    cin >> m;

    for (int i=0; m!=0; i++){
        int tmp = divide3(m);
        if (b%2==1){
            a[i] = tmp;
            m = m-a[i];
            n=i+1;
        }else{
            a[i] = tmp/2;
            i++;
            a[i] = tmp/2;
            m = m-tmp;
            n=i+1;
        }
    }
    cout << n << endl;

    for (int i=0; i<n; i++){
        cout << log(a[i])/log(3) << ' ';
    }
}

int divide3(int tmp) {
    b=1;

    for(int i=0; i<10; i++) {
        if(tmp%3 == 0){
           tmp = tmp/3;
            b = b*3; 
        }else if (tmp%3 == 1)
        {
            break;
        }else if (tmp%3 == 2)
        {
            b=b*2;
            break;
        }
            
    }

    return b;
}
