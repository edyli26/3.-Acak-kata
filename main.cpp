#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main()
{
    string kata;
    int indeks1,indeks2,jumlah;//variabel interger
    char temp;//variabel char

    cout << "Masukan sebuah kata : ";cin>>kata;
    cout << "Jumlah huruf dari" << kata << " adalah : ";
    cout <<kata.size() << endl <<endl;

    jumlah=kata.size();//jumlah huruf dalam kata
    srand(static_cast<unsigned int>(time(0)));
    for (int a=jumlah; a>0; a--){
        indeks1=rand() % jumlah;
        indeks2=a-1;

        temp = kata[indeks1];//fungsi untuk mengacak kata
        kata[indeks1] = kata[indeks2];
        kata[indeks2] = temp;

    }

    cout << "Hasil acak kata : " ;
    for (int i=0; i<jumlah; i++){

        cout << kata[i];
    }
    cout << endl << endl;
    return 0;
}
