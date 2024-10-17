#include<stdio.h>

void checkEven(int);
void checkPrime(int);

int main(void) {
    int value;
    scanf("%d",&value);
    
    if (value > 0) {
        printf("正の整数\n");
        checkEven(value);
    }else if (value < 0){
        printf("負の整数\n");
        checkEven(value);
    }else {
        printf("zero\n");
    }

    return 0;
}

void checkEven(int value){
    if (value%2 == 0) {
        printf("偶数\n");
        checkPrime(value);
    }else{
        printf("奇数\n");
        checkPrime(value);
    }
}

void checkPrime(int value){

    for (int i=2; i<value; i++){
        if (value%i == 0) {
            return;
        }
    }

    printf("素数\n");
    return;
}