//Nama Anggota : 
//1. Maulana Yusuf Habibi 2100018200
//2. Muhammad Hafizh Syabana 2100018208
//3. Muhamad Adji Sihab Kusuma 2100018216

#include<iostream>
#include<math.h>
using namespace std;

int tambah (int a, int b){
  int hasil1 = a + b;
  return hasil1;
}

int kurang (int c, int d){
  int hasil2 = c - d;
  return hasil2;
}

int kali (int e, int f){
  int hasil3 = e * f;
  return hasil3;
}

float bagi (float g, float h){
  float hasil4 = g / h;
  return hasil4;
}

int main() {
  cout<<"KALKULATOR SEDERHANA\n";
  cout<<"1. Penambahan\n";
  cout<<"2. Pengurangan\n";
  cout<<"3. Perkalian\n";
  cout<<"4. Pembagian\n";
  int a,b,c,d,e,f,g,h,pil;
  cout<<"Silakan pilih salah satu menu di atas : "; cin>>pil;

  if(pil==1){
    cout<<"Angka Pertama = "; cin>>a;
    cout<<"Angka Kedua = "; cin>>b;
    cout<<"Hasil = "<<tambah(a,b);
  }
  else if(pil==2){
    cout<<"Angka Pertama = "; cin>>c;
    cout<<"Angka Kedua = "; cin>>d;
    cout<<"Hasil = "<<kurang(c,d);
  }
  else if(pil==3){
    cout<<"Angka Pertama = "; cin>>e;
    cout<<"Angka Kedua = "; cin>>f;
    cout<<"Hasil = "<<kali(e,f);
  }
  else if(pil==4){
    cout<<"Angka Pertama = "; cin>>g;
    cout<<"Angka Kedua = "; cin>>h;
    cout<<"Hasil = "<<bagi(g,h);
  }
  else{
    cout<<"Pilihan Tidak Tersedia";
  }
  return 0;
}
