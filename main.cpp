#include <iostream>
using namespace std;

int stos[100];
int i = 0;
char znak;
int wartosc;

int main()
{
	while (cin >> znak)
	{
		switch (znak)
		{
		case '+':
			cin >> wartosc;
			if (i >= 10)
				cout << ":(" << endl;
			else
			{
				stos[i++] = wartosc;
				cout << ":)" << endl;
			}
			break;
		case '-':
			if (i <= 0)
				cout << ":(" << endl;
			else
				cout << stos[--i] << endl;
			break;
		}
	}
	return 0;
}
