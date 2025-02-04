
/* buatlah program yang menampilkan tabel perkalian 5 dari 1 x 5 hingga 10 X 5 menggunakan perulangan for*/
#include <iostream>
using namespace std;

int main (){
    cout << " Hasil Perkalian 5 x 1 - 5 x 10: " << endl;
    for(int i = 1; i <= 10; i+=1){
        for (int j = 5; j <=5; j+=5){
        cout << "5 X " << i << "= " << i * j << endl;
    }
    cout << endl;
    }
    return 0;
}