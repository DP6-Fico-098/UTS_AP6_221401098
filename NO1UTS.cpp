#include <iostream>
#include <string>
using namespace std;
int main()
{
     system ("CLS");
     int a,b,c,hasil;
    cout<<"Masukkan angka 1: ";
    cin>>a;
    cout<<"Masukkan angka 2: ";
    cin>>b;
    cout<<"Masukkan angka 3: ";
    cin>>c;
    hasil= a+b+c;

    string str_a = to_string(a);
    string str_b = to_string(b);
    string str_c = to_string(c);

    string combined_str = str_a + str_b + str_c;
        cout << "Jumlah kedua angka (dalam integer) : " << hasil << endl;
        cout << "Nilai  kedua angka (dalam string)  : " <<combined_str<< endl;
}