#include <iostream>
using namespace std;

int main(){
    int i,n;
    cin >> n;
    
    for (i = 0; i < n; i++){
        int k = 1;
        for (int j = 0; j <= i; j++){
            cout << k << ("\t");
            k = (k * (i - j)) / (j + 1);
        }
        cout << endl;
    }
}
