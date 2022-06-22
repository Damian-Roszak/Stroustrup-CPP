#include<iostream>
using namespace std;

    struct Polimorfizm {
        virtual ~Polimorfizm(){}
    };

    enum Bit {zero, jeden};
    enum Intensywnosc {
    	czarny = 0, najjasniejszy = 1000
    };

int main() {
	cout << "TYPY PODSTAWOWE:\n";
	cout << "sizeof(bool)== " << sizeof(bool) << '\n'; // sizeof(boool) nie musi być równe jeden ale może
	cout << "sizeof(char)== " << sizeof(char) << '\n';
	cout << "sizeof(signed char)== " << sizeof(signed char) << '\n';
	cout << "sizeof(unsigned char)== " << sizeof(unsigned char) << '\n';
	cout << "sizeof(wchar_t)== " << sizeof(wchar_t) << '\n'; // nie ma wariantów wchar_t z znakiem i bez znaku
	
	cout << "sizeof(signed short)== " << sizeof(signed short) << '\n';
	cout << "sizeof(unsigned short)== " << sizeof(unsigned short) << '\n';
	
	cout << "sizeof(signed int)== " << sizeof(signed int) << '\n';
	cout << "sizeof(unsigned int)== " << sizeof(unsigned int) << '\n';
	
	cout << "sizeof(signed long)== " << sizeof(signed long) << '\n';
	cout << "sizeof(unsigned long)== " << sizeof(unsigned long) << '\n';
	cout << "<<koniec podstawowych\n\n";
	
	cout << "TYPY LONG:\n";
#ifdef LONGLONG_EXT
	cout << "sizeof(signed long long)== " << sizeof(signed long long) << '\n';
	cout << "sizeof(unsigned long long)== " << sizeof(unsigned long long) << '\n';
#endif
	cout << "<<koniec LONG\n\n";
	
	cout << "TYPY ZMIENNOPOZYCYJNE:\n";
//Podstawowe typy zmiennopozycyjne:
	cout << "sizeof(float)== " << sizeof(float) << '\n';
	cout << "sizeof(double)== " << sizeof(float) << '\n';
	cout << "sizeof(long double)== " << sizeof(long double) << '\n';
	cout << "<<koniec zmiennopozycyjne\n\n";
	
	
	
//Typy wskaźnikowe:
	cout << "TYPY WSKAŹNIKOWE:\n";
	cout << "sizeof(int*)== " << sizeof(int*) << '\n';
	cout << "sizeof(int (*)())== " << sizeof(int (*)()) << '\n'; // ta konstrukcja odpowiada wskaźnikowi do funkcji
	cout << '\n';
	cout << "sizeof(void (Polimorfizm::*) ())== " << sizeof(void (Polimorfizm::*)()) << '\n'; //oto wskaźnik do funkcji składowej
	cout << "sizeof(void*)== " << sizeof(void*) << '\n';
	cout << "<<koniec wskaźnikowe\n\n";

//Typy wyliczeniowe:
	cout << "TYPY WYLICZENIOWE:\n";
	cout << "sizeof(Bit)== " << sizeof(Bit) << '\n';
	cout << "sizeof(Intensywnosc)== " << sizeof(Intensywnosc) << '\n';
	cout << "<<koniec wyliczeniowe\n\n";
	
	return 0;
}