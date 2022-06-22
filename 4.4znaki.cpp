#include<iostream>
using namespace std;

template<char C>
struct Typ {
	static void druk(){
		cout << "ZNAK:= '" << C 
				<< "' =:MA WARTOŚĆ INT:= " << int(C)
				<< '\n';   
	}
};

char const tablica_znakow[] =
		"abcdefghijklmnopqrstuvwxyz0123456789-=`~!@#$%^&*()_+";


int main(){
	//Typ<'a'>::druk();
	
//Nie dołączaj zera kończącego tablicę znaków!
//Najpierw dziesiętnie:
for (int k = 0; k<sizeof(tablica_znakow)-1; ++k)
		cout << " dziesiętnie: " << tablica_znakow[k] << '\t'
		<< dec << int(tablica_znakow[k])
		<< endl;
		
// lub ponieważ dec obowiązuje domyślnie:
for (int k = 0; k<sizeof(tablica_znakow)-1; ++k) 
	cout << " dziesiętnie2: " << tablica_znakow[k] << '\t'
	<< int(tablica_znakow[k]) << endl;

//szesnastkowo:
for (int k = 0; k<sizeof(tablica_znakow)-1; ++k)
	cout << " szesnastkowo: " << tablica_znakow[k] << '\t'
	<< hex << int(tablica_znakow[k]) << endl;
		
		
return 0;		
}