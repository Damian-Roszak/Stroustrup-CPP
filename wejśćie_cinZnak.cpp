#include<iostream>
using namespace std;

int main()
{
    string str;
    
    cout << "Wypisz swoje imię\n";
    getline (cin, str);
    cout << "Cześć " << str << "!\n";
    char stop;
    cin >> stop;
}
