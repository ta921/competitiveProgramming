#include <bits/stdc++.h>
using namespace std;

int main(void) {
    double a,b,c,d,e,f,g,h,i,j,k,l;

    cin >> a >> b >> c >> d >> e >> f;
    cin >> g >> h >> i >> j >> k >> l;

    vector<double> box1 = {(a+d)/2,(b+e)/2,(c+f)/2};
    vector<double> box2 = {(g+j)/2,(h+k)/2,(i+l)/2};
    vector<int> box1Size = {abs(int(a-d)),abs(int(b-e)),abs(int(c-f))};
    vector<int> box2Size = {abs(int(g-j)),abs(int(h-k)),abs(int(i-l))};

    for (int x=0; x<3; x++){
        if (abs(box1.at(x)-box2.at(x)) >= abs(double(box1Size.at(x))/2+double(box2Size.at(x))/2)){
            cout << "No" << endl;
            break;
        }

        if (x==2){
            cout << "Yes" << endl;
        }
    }

    return 0;
}