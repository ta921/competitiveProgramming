#include<stdio.h>

int main(void) {
    int values[3];
    scanf("%d%d%d",&values[0],&values[1],&values[2]);
    int sum = 0;
    for (int i=0; i<3; i++){
        sum += values[i];
    }
    printf("%d",sum);

    return 0;
}