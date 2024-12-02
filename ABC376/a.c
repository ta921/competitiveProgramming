#include <stdio.h>

int main () {
    int n, c, t[1000];
    scanf("%d", &n);
    scanf("%d", &c);

    int pastTime = -1000, candyCount=0;

    for (int i=0; i<n; i++){
        scanf("%d", &t[i]);
        if(t[i] - pastTime >= c){
            candyCount++;
            pastTime = t[i];
        }
    }

    printf("%d",candyCount);

    return 0;
}