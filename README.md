# Praktikum6

**NAMA 	: NUR ALI MUHAMMAD**

**KELAS	: TI.18.A.2**

**NIM	: 311810355**

## latihan1.cpp : Program Kalkulator (Program Dengan Menggunakan File Header).

**Alur Program :**

1. Membuat **file header** untuk program yang akan di jalankan.
2. Membuat fungsi dari **file header** di tempat yang berbeda.
3. Kemudian panggil fungsinya pada **file header** tersebut.
4. Mulai program fungsi dengan menggunakan **header** yang telah dibuat agar fungsinya berjalan.

**Code Program Yang Berisi File Header :**

```c++

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

```

## kalkulator.h (File Header)

**Code Program File Headernya :**

```c++

#ifndef KALKULATOR_H_INCLUDED
#define KALKULATOR_H_INCLUDED

int kali(int, int);
double bagi(int, int);
int tambah(int, int);
int kurang(int, int);

#endif // KALKULATOR_H_INCLUDED

```

## kalkulator.cpp (fungsi dari file header)

**Code Program dari fungsi File Headernya :**

```c++

#include<iostream>
using namespace std;

int kali(int a, int b){ return a*b; }

double bagi(int a, int b){ return a/b; }

int tambah(int a, int b){ return a+b; }

int kurang(int a, int b){ return a-b; }

```

**Flowchart Program :**

![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum6/master/latihan1/flowchart.png)

**Hasilnya :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum6/master/latihan1/SS.png)


## latihan2.1.cpp : Membuat Fungsi (void) Menggunakan Passing Parameter By Reference Untuk Menukar Nilai Dua Buah Variable.

**Alur Program :**

1. Membuat fungsi tukar **void tukar** dengan mendeklarasikan `int *a` dan `int *b`.
2. Membuat fungsi utama untuk memnggil dari fungsi tukar.
3. Mendeklarasikan `int=5` dan `int=8`.
4. Membuat **pasing parameter by reference** yang berguna untuk mencari bilangan variablenya saja.
5. Panggil **void tukar** untuk menjalan fungsinya.

**Code Program :**

```c++

#include<iostream>
using namespace std;

void tukar(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;

}
main()
{
int a = 5, b = 8;
cout<< "\nNilai Sebelum ditukar :\n";
cout << "Nilai 1 : " << a << endl;
cout << "Nilai 2 : " << b << endl;
tukar(&a, &b);
cout << "\nNilai Sesudah ditukar :\n";
cout << "Nilai 1 : " << a << endl;
cout << "Nilai 2 : " << b << endl;
return 0;
}

```

**Flowchart Program :**

![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum6/master/latihan2.1/flowchart.png)

**Hasilnya :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum6/master/latihan2.1/SS.png)


## latihan2.2.cpp : Membuat Fungsi (void) Menggunakan Passing Parameter By Value Untuk Perkalian Dua Buah Bilangan Bulat.

**Alur Program :**

1. Memulai program fungsi sederhana dengan menggunakan operator penjumlahan.
2. Mendeklarasikan fungsi `int kali(int m, int n)`.
3. Mendeklarasikan fungsi `int i,hasil=0`.
4. Menggunakan fungsi `for` untuk pengulangan.
5. Membuat **pasing parameter by value** yang berguna untuk mencari variablenya saja.
6. Membuat fungsi utama dengan mendeklarasikan `int a,b`.
7. Memanggil fungsi dari **kali** untuk menjalankan programnya.

**Code Program :**

```c++

#include<iostream>
#include<math.h>

using namespace std;

int kali(int m, int n)
{
    int i, hasil=0;
    for (i=1; i<=(n);i++)
        hasil +=m;
    if (n<0) return(-hasil); else return(hasil);
}
main()
{
    int a,b;
    cout<<"\nMasukan Bilangan : ";
    cin >>a;
    cout<<"\nDikalikan dengan Bilangan : ";
    cin >>b;
    cout<< "\nNilai " << a << " X " << b <<" = " << kali(a,b);
    return 0;
}

```

**Flowchart Program :**

![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum6/master/latihan2.2/flowchart.png)

**Hasilnya :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum6/master/latihan2.2/SS.png)


**TERIMA KASIH** # praktikum6
