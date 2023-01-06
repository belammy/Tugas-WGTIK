#include <iostream>

using namespace std;


int main(){
    int nilai = 0;
    char i;
    do {

    cout << "Masukan Nilai:";
    cin >> nilai ;

    if (nilai < 50 ){
        cout << " Gagal " << endl;
    } else if (nilai < 60) {
        cout << "C" << endl;
    } else if (nilai < 80){
        cout << "B" << endl;
    } else if (nilai < 101){
        cout << "A" << endl;
    }
    cout << "Mau masukan nilai lagi?" << endl;
    cout << "Y/T" << endl;
    cin >> i;
    }
    while (i =='Y');
    cout << "Inputan sudah selesai" << endl;
}


