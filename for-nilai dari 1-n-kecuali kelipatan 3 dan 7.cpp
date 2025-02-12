
#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Masukkan nilai ganjil kecuali kelipatan 7 dan 11 dari 1 - :";
    cin >> n;

    for (int i = 1; i < n; i++){
        if (i % 2 != 0){
            if (i % 3 == 0){
                 continue;
                if (i % 7 == 0){
                    continue;
                } 
            }
            cout << i << endl;
        }
    }
    return 0;
}
