#include<iostream>
#include<limits>
#include<typeinfo>

using namespace std;

template<typename T>
struct Typ2 {
	static void drukuj() {
		cout << typeid(T).name() << ": zakresem jest ("
				<< numeric_limits<T>::min() << ", "
				<< numeric_limits<T>::max() <<  ")\n"
				<< int(numeric_limits<T>::max()) << "\n"
				<< char(127) << "\n";
	}
};

int main(){
	Typ2<char>::drukuj();
	Typ2<short>::drukuj();
	Typ2<int>::drukuj();
	Typ2<long>::drukuj();
	Typ2<float>::drukuj();
	Typ2<double>::drukuj();
	Typ2<long double>::drukuj();
	Typ2<unsigned>::drukuj();
return 0;	
}