#include <iostream>
using namespace std;

void menuHp(){
    string merk;
    int harga;
    cout << "=== Cek Harga Hp ===";
    cout << "\nMasukkan merk Hp: ";
    cin >> merk;
    cout << "Masukkan harga: ";
    cin >> harga;
    
    if (merk == "samsung") {
        if(harga == 2000000){
            cout << "Hp Samsung harga Rp 2.000.000 tersedia" << endl;
        }else {
            cout << "Harga hp Samsung tidak tersedia" << endl;
        }
    }else if(merk == "oppo"){
        if(harga == 2000000) {
            cout << "Hp Oppo dengan harga Rp 2.000.000 tersedia" << endl;
        }else {
            cout << "Harga hp Oppo tidak tersedia" << endl;
        }
    }else {
        cout << "Merk hp tidak terdaftar" << endl;
    }
}

int main() {
    menuHp();
    return 0;
}