namespace MojeNazwyA {
	void f(int); // deklaracja f
	void g(){
		f(3); // użycie MojeNazwy::f(int)
	}
}

namespace MojeNazwy{
	void f(int);
}

namespace TwojeNazwy{
	void f(int);
}

void g(){
	TwojeNazwy::f(1);
	MojeNazwy::f(2);
}

#include <iostream>

int main(){
	using std::cout; //deklaracja użycia
	cout << "Halo, ";
	cout << "Ziemia! \n";
	return 0;
}

#include <iostream>

int main()
{
	using namespace std; // dyrektywa użycia
	cout << "Halo, ";
	cout << "znowu. \n";
	return 0;
	
}
