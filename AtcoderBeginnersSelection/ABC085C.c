#include<stdio.h>

enum mode{
    dreamer,
    dream,
    eraser,
    erase,
};

int checkStr(int, char*, int*);

int main(void) {
    char s[100000];
    scanf("%s",s);
    int now = 0;
    int flag = 1;
    
    while(flag){
        if (now >= 100000 || s[now]==0 || s[now]=='\n'){
            printf("YES");
            return 0;
        }

        if (s[now] == 'd'){
            if(s[now+5] == 'e' && s[now+6] == 'r'){
                if(s[now+9] == 'e'){
                    flag = checkStr(dream, &s[now], &now);
                }else{
                    flag = checkStr(dreamer, &s[now], &now);
                }
            }else{
                flag = checkStr(dream, &s[now], &now);
            }

        }else if (s[now] == 'e'){
            if(s[now+5] == 'r'){
                flag = checkStr(eraser, &s[now], &now);
            }else{
                flag = checkStr(erase, &s[now], &now);
            }
        }else{
            printf("NO");
            return 0;
        }
    }

    printf("NO");
    return 0;
}

int checkStr(int flag, char* array, int* now){
    switch (flag)
    {
    case dream:
        if(array[1] != 'r' || array[2] != 'e' || array[3] != 'a' || array[4] != 'm') return 0;
        *now += 5;
        return 1;
        break;
    case dreamer:
        if(array[1] != 'r' || array[2] != 'e' || array[3] != 'a' || array[4] != 'm') return 0;
        *now += 7;
        return 1;
        break;
    case erase:
        if(array[1] != 'r' || array[2] != 'a' || array[3] != 's' || array[4] != 'e') return 0;
        *now += 5;
        return 1;
        break;
    case eraser:
        if(array[1] != 'r' || array[2] != 'a' || array[3] != 's' || array[4] != 'e') return 0;
        *now += 6;
        return 1;
        break;
    };
}