#include <iostream>
using namespace std;

int main (){
    int tahun;

        cout <<"                                    " << endl;
        cout <<"====================================" << endl;
        cout << " Program Menentukan Tahun Kabisat  " << endl;
        cout <<"====================================" << endl;
        cout <<"                                    " << endl;
        cout << " Masukkan tahun : ";
        cin >> tahun;

    if(tahun % 400 == 0 ){
        cout << " Tahun Kabisat " << endl;

    }else if(tahun % 400 != 0 && tahun % 100 == 0){
        cout << " Bukan Tahun Kabisat " << endl;

    }else if(tahun % 4 == 0){
        cout << " Tahun Kabisat " << endl;


    }else {
        cout << " Bukan Tahun Kabisat " ;

    }
    return 0;
    }
