#include <iostream>
using namespace std;


int factoriel(int sayi){
    if(sayi<=1){
        return sayi;
    }
    else{
        return sayi*factoriel(sayi-1);
    }
}

int main() {
    int sayi;
    cout << "Lutfen faktoriyel hesaplamasi icin 17 den kucuk bir sayi giriniz : "<< endl;
    cin>>sayi;
    if(sayi<17){
        cout<<factoriel(sayi)<<endl;
    }  else{
        cout<< "Girilen sayi 17 den buyuk veya esittir"<<endl;
    }  
    return 0;
}
