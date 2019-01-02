#include <iostream>
using namespace std;
int main () {
float pemasukan, pengeluaran;

cout<<"PROGRAM PEMASUKAN DAN PENGELUARAN ANDA"<<endl;
cout<<"MASUKKAN PEMASUKAN ANDA = Rp ";
cin>>pemasukan;
cout<<"MASUKAN PENGELUARAN ANDA = Rp ";
cin>>pengeluaran;

if (pemasukan>pengeluaran)
    cout<<"SELAMAT ! PEMASUKAN ANDA LEBIH BESAR"<<endl;
else
    cout<<"OOPS ! HATI-HATI PENGELUARAN ANDA LEBIH BESAR"<<endl;
}
