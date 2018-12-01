#include<iostream>
#include<kalkulator.h>

using namespace std;

int inputData(string v="A");

int main(int argc, char const *argv[])
{
    cout << "Program Kalkulator Menggunakan Header" << endl;
    cout << "_____________________________________" << endl;
    int a, b;
    a = inputData();
    b = inputData("B");

    cout << "\nHasil Perkalian AxB (" << a << "x" << b << ") adalah : " << kali(a, b) << endl;
    cout << "\nHasil Pembagian A/B (" << a << "/" << b << ") adalah : " << bagi(a, b) << endl;
    cout << "\nHasil Penambahan A+B (" << a << "+" << b << ") adalah : " << tambah(a, b)<< endl;
    cout << "\nHasi Pengurangan A-B (" << a << "-" << b << ") adalah : " << kurang(a, b) << endl;


    return 0;
}
int inputData(string v)
{
    cout << "Masukan Bilangan " << v << " : ";
    int bil;
    cin >> bil;
    return bil;
}
