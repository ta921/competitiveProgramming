#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
using namespace std;

int main(void) {
    int n,m;
    int u,v,w;
    cin >> n >> m;

    int x[n][n]; //x[u][v]

    void check() {
        for (int j=0; j<n; j++){
            if (x[u][j] != NULL){
                continue;
            }else{
                clean();
            }
            if (x[j][u] != NULL){
                continue;
            }else{
                clean();
            }
        }
    }

    for (int i=0; i<m; i++){
        cin >> u >> v >> w;

        for (int j=0; j<n; j++){
            if (x[u][j] != NULL){
                break;
            }else{
                clean()
            }
            if (x[v][u] != NULL){
                break;
            }else{
                clean()
            }
        }
        if (x[u].empty)
        if (x[u][v] == NULL){
            x[u][u] = 0;
            x[v][v] 
        }

        if (x[v]-x[u])
    }

}