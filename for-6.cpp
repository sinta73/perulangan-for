
/* buatlah program yang menampilkan deret fibonacci hingga suku ke-10 menggunakan perulangan for*/
#include <iostream>
using namespace std;

int main (){
    cout << "deret FIBONACCI 1-10: ";
    cout << endl;

    int n = 10, t1 = 0, t2 = 1, angka_berikutnya = 0;

    for(int i = 1; i <=10; i++){
        if (i == 1){
            cout << t1 << " ";
            continue;
        }
        if (i == 2){
            cout << t2 << " ";
            continue;
        }

        angka_berikutnya = t1 + t2;
        t1 = t2;
        t2 = angka_berikutnya;
        cout << angka_berikutnya << " ";
    }
    cout << endl;
    return 0;
}