
#include <iostream>
using namespace std;

int wyznaczanie(int n){
	
	if (n < 2){
		return 0;
	}for(int d=2;d*d<n;d++){
		if  (n % d == 0){
			return 0;
		}
	}
	return 1;
}


int main(){
	
	int n;
	
	cout<<"Podaj liczbe: ";
	cin>>n;
	
	if(wyznaczanie(n)){
		cout<<"Twoja liczba jest pierwsza";
	}else{
		
		cout<<"Twoja liczba nie jest pierwsza";
	}
		return 0;
}



