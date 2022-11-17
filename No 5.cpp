#include <iostream>
using namespace std;

int main(){
   float harga;
   int kodesusu,JumlahPembelian;
   string ukuran;

   cout << "======================================================================================================================" <<endl;
   cout << "                                 Program Membuat Sistem Penjualan Susu " << endl;
   cout << "======================================================================================================================" <<endl;
   cout << " " << endl;
   cout << "             === DAFTAR HARGA PRODUK SUSU === "<<endl;
   cout << "        __________________________________________" <<endl;
   cout << " " <<endl;

   cout << " =============================================================="<<endl;
   cout << " || Kode Susu || Nama Produk ||    Ukuran  || Harga          ||"<<endl;
   cout << " ||==========================================================||"<<endl;
   cout << " ||           ||             || B = Besar  || Rp. 10.000,-   ||" <<endl;
   cout << " ||      1    ||  Dancow     || S = Sedang || Rp. 4.250,-    ||" <<endl;
   cout << " ||           ||             || K = Kecil  || Rp. 2.100,-    ||" <<endl;
   cout << " ||----------------------------------------------------------||" <<endl;
   cout << " ||           ||             || B = Besar  || Rp. 8.500,-    ||" <<endl;
   cout << " ||      2    ||  Indomilk   || S = Sedang || Rp. 4.000,-    ||" <<endl;
   cout << " ||           ||             || K = Kecil  || Rp. 2.025,-    ||" <<endl;
   cout << " ||----------------------------------------------------------||" <<endl;
   cout << " ||           ||             || B = Besar  || Rp. 17.000,-   ||" <<endl;
   cout << " ||      3    ||  Sustacal   || S = Sedang || Rp. 14.500,-   ||" <<endl;
   cout << " ||           ||             || K = Kecil  || Rp. 8.300,-    ||" <<endl;
   cout << " ||----------------------------------------------------------||"<<endl;
   cout << "" <<endl;
   cout << "" <<endl;

   cout << " Masukkan Kode Susu (1,2,3)     : ";
   cin >> kodesusu;
   cout << " Masukkan Jumlah Pembelian      : ";
   cin >> JumlahPembelian;
   cout << " Masukkan Ukuran (B/S/K)        : ";
   cin >> ukuran;


    if(kodesusu == 1 ) {
        if(ukuran == "B"){
            harga = (JumlahPembelian * 10000);
            cout << ""<<endl;
            cout << " Susu Dancow " << endl;
            cout << " Harga Rp. 10.000,-" << endl;
            cout << " Jumlah Pembelian : " << harga << endl;
            cout << "=============================================" <<endl;

        }else if(ukuran == "S"){
            harga = (JumlahPembelian * 4250);
            cout << ""<<endl;
            cout << " Susu Dancow " <<endl;
            cout << " Harga Rp. 4.250,-"<<endl;
            cout << " Jumlah pembelian : " << harga << endl;

        }else if(ukuran == "K"){
            harga = (JumlahPembelian * 2100);
            cout << ""<<endl;
            cout << " Susu Dancow " <<endl;
            cout << " Harga Rp. 2.100,-"<<endl;
            cout << " Jumlah Pembelian : "<< harga <<endl ;

        }else{
            cout << " Jumlah dan Ukuran tidak valid. Mohon masukkan jumlah dan ukuran yang benar " <<endl;
    }


    }else if(kodesusu == 2){
        if(ukuran == "B"){
            harga = (JumlahPembelian * 8500);
            cout << ""<<endl;
            cout << " Susu Indomilk "<<endl;
            cout << " Harga Rp. 8.500,-"<<endl;
            cout << " Jumlah Pembelian : " << harga <<endl;

        }else if(ukuran == "S"){
            harga = (JumlahPembelian *  4000);
            cout << ""<<endl;
            cout << " Susu Indomilk " <<endl;
            cout << " Harga Rp. 4.000,-" <<endl;
            cout << " Jumlah Pembelian : "<< harga <<endl;

        }else if(ukuran == "K"){
            harga = (JumlahPembelian * 2025);
            cout << ""<<endl;
            cout << " Susu Indomilk " <<endl;
            cout << " Harga Rp. 2.025,-" <<endl;
            cout << " Jumlah Pembelian : "<< harga <<endl;

        }else{
            cout << " Jumlah dan Ukuran tidak valid. Mohon masukkan jumlah dan ukuran yang benar " <<endl;
        }
    }else if(kodesusu == 3){
        if(ukuran == "B"){
            harga = (JumlahPembelian * 17000);
            cout << ""<<endl;
            cout << " Susu Sustacal " <<endl;
            cout << " Harga Rp. 17.000,-" <<endl;
            cout << " Jumlah Pembelian : "<< harga <<endl;

        }else if(ukuran == "S"){
            harga = (JumlahPembelian * 14500);
            cout << ""<<endl;
            cout << " Susu Sustacal " <<endl;
            cout << " Harga Rp. 14.500,-"<<endl;
            cout << " Jumlah Pembelian : "<< harga << endl;

        }else if(ukuran == "K"){
            harga = (JumlahPembelian * 8300);
            cout << ""<<endl;
            cout << " Susu Sustacal " <<endl;
            cout << " Harga Rp. 8.300,-"<<endl;
            cout << " Jumlah Pembelian : "<< harga <<endl;

        }else{
            cout << " Jumlah dan Ukuran tidak valid. Mohon masukkan jumlah dan ukuran yang benar " <<endl;
        }

        }else{
        cout << " Harap masukkan pilihan yang tersedia " <<endl;
    }
 return 0;
    }
