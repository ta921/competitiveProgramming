//解けてない
#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int n, m;
    int a[200000];
    
    cin >> n >> m;
    vector<vector<int>> b(m, vector<int>(2));
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int i=0; i<m; i++){
        std::cin >> b[i][0];
        b[i][1]=i;
    }

    std::sort(b.begin(),b.end(),[](const vector<int> &alpha,const vector<int> &beta){return alpha[0] < beta[0];});    

    int currentPerson = 0;
    for (int i=0; i<m; i++){
        for (int j=currentPerson; j<n; j++){
            if(a[j]<=b[i][0]){
                b[i][0]=currentPerson+1;
                currentPerson=j;
                break;
            }
            if(currentPerson==n-1){
                b[i][0]=-1;
                break;
            }
        }
    }

    std::sort(b.begin(),b.end(),[](const vector<int> &alpha,const vector<int> &beta){return alpha[1] < beta[1];});

    for (int i=0; i<m; i++){
        std::cout << b[i][0] << endl;
    }
}