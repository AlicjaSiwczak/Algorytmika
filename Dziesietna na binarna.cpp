#include<iostream>

using namespace std;
 
 
void dtb(int liczba){

	int tab[15];

	int i = 0;

	while (liczba != 0) {

		tab[i++] = liczba % 2;

		liczba = liczba / 2;

		}

 
    for(int j=i-1;j>=0;j--)
    
	cout<<tab[j];

}

int main(){


	int liczba;

	cout << "Podaj liczke dziesietna: ";
    cin >> liczba;

    cout << "Liczba " <<liczba<< " po zmianie na postac binarna: ";
    
	dtb(liczba);
	
    return 0;

}
 