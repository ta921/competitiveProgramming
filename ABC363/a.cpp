#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int R;

    cin >> R;

    if (R <= 99){
        cout << 100-R << endl;
    }else if(R <= 199){
        cout << 200-R << endl;
    }else{
        cout << 300-R << endl;
    };
}
