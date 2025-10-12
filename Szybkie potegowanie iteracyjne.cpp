#include <iostream>
using namespace std;

long long int szybkie_potegowanie(long long a, int n){

    long long wynik = 1;
    
    while (n > 0){
        if (n % 2 == 1) 
            wynik *= a;  
        a *= a;
        n /= 2;
    }
    return wynik;
}

int main(){
	int n;
	long long a; 
	
	cout<<"Podaj baze: ";
	cin>>a;
	cout<<"Podaj wykladnik: ";
	cin>>n;
	
	cout<<a<<" do potegi "<<n<<" wynosi "<<szybkie_potegowanie(a, n);

	return 0;
}