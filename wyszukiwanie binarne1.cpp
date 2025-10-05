#include <iostream>
using namespace std;

int tab[11] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21};

int szukamy(int l, int p, int szukana){
	
	int sr;
	while (l <= p) {
		
		sr = (l + p)/2;
		
		if (tab[sr] == szukana) {
            return sr; 
        }
        else if (tab[sr] > szukana) {
            p = sr - 1; 
        }
        else {
            l = sr + 1; 
        }
    }

    return -1; 
}
    
int main(){
	
    int i = sizeof(tab) / sizeof(tab[0]);
	int szukana;
	
	cout << "Podaj liczke, ktora szukasz: ";
    cin >> szukana;
    
    int wynik = szukamy(0, i - 1, szukana);

    if (wynik != -1)
        cout << "Liczbe znaleziona na pozycji: " << wynik << endl;
    else
        cout << "Nie znaleziono liczby." << endl;

    
    return 0;
}
