#include <iostream>
using namespace std;

int main (){
    string username, password;

    cout <<"=======================================" << endl;
    cout << "     Program Login Sederhana          " << endl;
    cout <<"=======================================" << endl;
    cout << ""<< endl;

    cout << " Masukkan Username : ";
    cin >> username;

    cout << " Masukkan Password : ";
    cin >> password;

if(username == "allyaputri" && password == "allyaputri22"){
    cout << " Username dan password sesuai, Login berhasil " << endl;

}else if(username == "allyaputri" && password != "allyaputri22"){
    cout << " Username sesuai, password tidak sesuai " << endl;

}else if(username != "allyaputri" && password == "allyaputri22"){
    cout << " Username tidak sesuai, password sesuai " << endl;

}else if (username != "allyaputri" && password != "allyaputri22") {
    cout << " Username dan password tidak sesuai " ;
    cout << "" << endl;

}
 return 0;

}
