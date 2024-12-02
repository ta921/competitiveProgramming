#include <stdio.h>

int moveToLeft(int n, int from, int to);
int moveToRight(int n, int from, int to);

int main () {
    int n, q, t[100];
    char h[100];
    scanf("%d", &n);
    scanf("%d", &q);

    int sum = 0;
    int cullent[2] = {1,2};

    int tmpLeftCount=0, tmpRightCount=0;
    int tmpLeftMoveHandPos[2], tmpRightMoveHandPos[2];
    int whichHand;

    for (int i=0; i<q; i++){
        scanf("%s", &h[i]);
        scanf("%d", &t[i]);

        if(h[i] == 'L'){
            whichHand=0;
        }else{
            whichHand=1;
        }

        tmpLeftMoveHandPos[0]=cullent[0], tmpLeftMoveHandPos[1]=cullent[1], tmpRightMoveHandPos[0]=cullent[0], tmpRightMoveHandPos[1]=cullent[1];

        /*両手を動かせる時

        //左周りをしたときの処理
        if(moveToLeft(n,cullent[whichHand],cullent[(whichHand+1)%2]) > moveToLeft(n,cullent[whichHand],t[i])){
            tmpLeftCount=moveToLeft(n,cullent[whichHand],t[i]);
            tmpLeftMoveHandPos[whichHand]=(tmpLeftMoveHandPos[whichHand]-tmpLeftCount+n)%n;
        }else{
            tmpLeftCount=moveToLeft(n,cullent[whichHand],t[i])+moveToLeft(n,cullent[(whichHand+1)%2],t[i])+1;
            tmpLeftMoveHandPos[whichHand]=(tmpLeftMoveHandPos[whichHand]-tmpLeftCount+n)%n;
            tmpLeftMoveHandPos[(whichHand+1)%2]=(tmpLeftMoveHandPos[whichHand]-1+n)%n;
        }

        //右周り
        if(moveToRight(n,cullent[whichHand],cullent[(whichHand+1)%2]) > moveToRight(n,cullent[whichHand],t[i])){
            tmpRightCount=moveToRight(n,cullent[whichHand],t[i]);
            tmpRightMoveHandPos[whichHand]=(tmpRightMoveHandPos[whichHand]+tmpRightCount+n)%n;
        }else{
            tmpRightCount=moveToRight(n,cullent[whichHand],t[i])+moveToRight(n,cullent[(whichHand+1)%2],t[i])+1;
            tmpRightMoveHandPos[whichHand]=(tmpRightMoveHandPos[whichHand]+tmpRightCount+n)%n;
            tmpRightMoveHandPos[(whichHand+1)%2]=(tmpRightMoveHandPos[whichHand]+1+n)%n;
        }

        if (tmpLeftCount<tmpRightCount){
            sum += tmpLeftCount;
            cullent[0]=tmpLeftMoveHandPos[0],cullent[1]=tmpLeftMoveHandPos[1];
        }else{
            sum += tmpRightCount;
            cullent[0]=tmpRightMoveHandPos[0],cullent[1]=tmpRightMoveHandPos[1];
        }

        */

       //指定された手のみを動かせる時
       //左周りをしたときの処理
        if(moveToLeft(n,cullent[whichHand],cullent[(whichHand+1)%2]) > moveToLeft(n,cullent[whichHand],t[i])){
            tmpLeftCount=moveToLeft(n,cullent[whichHand],t[i]);
            tmpLeftMoveHandPos[whichHand]=(tmpLeftMoveHandPos[whichHand]-tmpLeftCount+n)%n;
        }else{
            tmpLeftCount=10000;
            tmpLeftMoveHandPos[whichHand]=(tmpLeftMoveHandPos[whichHand]-tmpLeftCount+n)%n;
            tmpLeftMoveHandPos[(whichHand+1)%2]=(tmpLeftMoveHandPos[whichHand]-1+n)%n;
        }

        //右周り
        if(moveToRight(n,cullent[whichHand],cullent[(whichHand+1)%2]) > moveToRight(n,cullent[whichHand],t[i])){
            tmpRightCount=moveToRight(n,cullent[whichHand],t[i]);
            tmpRightMoveHandPos[whichHand]=(tmpRightMoveHandPos[whichHand]+tmpRightCount+n)%n;
        }else{
            tmpRightCount=10000;
            tmpRightMoveHandPos[whichHand]=(tmpRightMoveHandPos[whichHand]+tmpRightCount+n)%n;
            tmpRightMoveHandPos[(whichHand+1)%2]=(tmpRightMoveHandPos[whichHand]+1+n)%n;
        }

        if (tmpLeftCount<tmpRightCount){
            sum += tmpLeftCount;
            cullent[0]=tmpLeftMoveHandPos[0],cullent[1]=tmpLeftMoveHandPos[1];
        }else{
            sum += tmpRightCount;
            cullent[0]=tmpRightMoveHandPos[0],cullent[1]=tmpRightMoveHandPos[1];
        }

    }

    printf("%d",sum);

    return 0;
}

//左周りで手を動かした時の操作回数
int moveToLeft(int n, int from, int to){
    if (to < from){
        return from-to;
    }else if (to > from){
        return from+n-to;
    }else{
        return 0;
    }
}

//右周りで手を動かした時の操作回数
int moveToRight(int n, int from, int to){
    if (to > from){
        return to-from;
    }else if (to < from){
        return to+n-from;
    }else{
        return 0;
    }
}