
#include <iostream>
using namespace std;

int main(){
    cout << "Nilai ganjil dari 1 - 30 kecuali kelipatan 3:" << endl;
    for (int i = 1; i <= 30; i++){
        if (i % 2 != 0){
            if (i % 3 == 0){
                continue;
            }
            cout << i << endl;
        }
    }
    return 0;
}