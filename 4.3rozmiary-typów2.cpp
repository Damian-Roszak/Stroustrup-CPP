#include <iostream>
#include <typeinfo>
//skąd taki sposób wyświetlania wyniku i takie NAZWY ZWŁASZCZA

template<typename T>
struct Type {
	static void drukuj() {
		std::cout << "sizeof(" << typeid(T).name() << ") = " << sizeof(T) << std::endl;
	}
};

struct Polimorfizm {
	virtual ~Polimorfizm() {}
};

enum Bit { zero, jeden };
enum Intensywnosc { czarny = 0, najjasniejszy = 1000 };

int main() {
// Podstawowe typy całościowe:
	Type<bool>::drukuj(); //nie musi być równe jeden ale może
	Type<char>::drukuj(); //to musi być równe jeden!
	Type<signed char>::drukuj();
	Type<unsigned char>::drukuj();
	Type<wchar_t>::drukuj(); // nie ma wariantów z znakiem i bez znaku
	
	Type<signed short>::drukuj();
	Type<unsigned short>::drukuj();
	Type<signed int>::drukuj();
	Type<unsigned int>::drukuj();
	
	Type<signed long>::drukuj();
	Type<unsigned long>::drukuj();
	
#ifdef LONGLONG_EXT
	Type<signed long long>::drukuj();
	Type<unsigned long long>::drukuj();
#endif
	
// Podstawowe typy zmiennopozycyjne:
	Type<float>::drukuj();
	Type<double>::drukuj();
	Type<long double>::drukuj();
	
//Typy wskaźnikowe:
	Type<int*>::drukuj();
	Type<int(*)()>::drukuj();//wskaźnik do funkcji
	Type<void (Polimorfizm::*)()>::drukuj(); //wskaźnik do funkcji składowej
	Type<void*>::drukuj(); //może być większe niż int* (rzadko)
	
//Typy wyliczeniowe:
	Type<Bit>::drukuj();
	Type<Intensywnosc>::drukuj();

return 0;	
}