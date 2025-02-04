
/* buatlah program yang menampilkan bilangan ganjil dari 1 hingga 15 menggunakan perulangan for*/
include <iostream>
using namespace std;

int main (){
    cout << "bilangan ganjil antara 1-15: " << endl;
    for (int i = 1; i <= 15; i +=2){
        cout << i << endl;
    }
    return 0;
}