#include <bits/stdc++.h>
#include <string>

using namespace std;

/*解けてない*/
int facctorialMethod(int k);

int main(void) {
    int N, K;
    char S[N];
    int alpabetCount[26];
    for (int i=0; i<26; i++){
        alpabetCount[i]=0;
    }

    cin >> N >> K;
    /*cin >> S;*/

    int patternNumber = facctorialMethod(N);

    for (int i=0; i<N; i++){
        cin >> S[i];
        alpabetCount[(int)S[i]%97]++;
    }



    for (int i=0; i<26; i++){
        patternNumber = patternNumber / facctorialMethod(alpabetCount[i]);
    }

    cout << patternNumber << endl;
}

int facctorialMethod(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}