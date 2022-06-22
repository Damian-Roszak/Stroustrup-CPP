int main()
{
	const float wsp = 2,54;
	float x, in, cm;
	char ch = 0;
	
	cout << "podaj długość: ";
	cin >> x; cin >> ch;
	
	switch (ch)	{
	case 'i':
		in = x;
		cm - x * wsp;
		break;
	case 'c':
		in = x/wsp;
		cm = x;
		break;
	default:
		in=cm=0;
		break;
	}
	cout << in << "in = " << cm << " cm\n";
}