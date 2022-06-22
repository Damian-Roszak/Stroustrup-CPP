#include <iostream>
using namespace std;


int main()
{
//using std::cout;
//using std::cin;

    const float wsp = 2.54;
    float x, in, cm;
    char ch=0;
    
    std::cout << "podaj długość: ";
    std::cin >> x;
    std::cin >> ch;
    
    switch (ch) {
    case 'i':
        in = x;
        cm = x*wsp;
        break;
    case 'c':
        in = x/wsp;
        cm = x;
        break;
    default:
        in = cm = 0;
        break;
    }
    std::cout << in << " in = " << cm << " cm\n";
}
