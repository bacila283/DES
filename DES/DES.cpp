#include <iostream>
#include <string>
#include <stdlib.h>
#include "DES.h"
using namespace std;

string perevod(string qq)
 {

	string text,result;
	//getline(cin, text);
	text = qq;
	for (int u = 0; u < text.size(); u++)
	{
		//10-2
		string b, b1;
		int q; //<- сюда ввод
		q = text[u];
		//cout << q <<"  1"<< endl;
		for (int i = 0; q != 0; i++)
		{
			if (q % 2 == 0)
				b = b + '0';
			else if (q % 2 == 1)
				b = b + '1';
			q = q / 2;
		}
		int t = b.size() * -1;
		b1 = b;
		/*for (int i = b.size() - 1; i > -1; i--)
		{
			cout << b[i];
		}
		cout << endl;*/
		//2-10
		int  r, s = 0, h = 0;
		char y;
		b = "0000110";
		for (int i = 0; i < b.size(); i++)
		{
			y = b[i];
			r = y - 48;
			r = r * pow(2, h);
			h++;
			s = s + r;
		}
		cout << s << "  //" << endl;
		//10-16
		char wor;
		bool aka = true;
		b = "";
		for (int i = 0; aka == true; i++)
		{
			if (s <= 15)
				aka = false;
			q = s % 16;
			switch (q)
			{
			case 0:
				wor = '0';
				break;
			case 1:
				wor = '1';
				break;
			case 2:
				wor = '2';
				break;
			case 3:
				wor = '3';
				break;
			case 4:
				wor = '4';
				break;
			case 5:
				wor = '5';
				break;
			case 6:
				wor = '6';
				break;
			case 7:
				wor = '7';
				break;
			case 8:
				wor = '8';
				break;
			case 9:
				wor = '9';
				break;
			case 10:
				wor = 'A';
				break;
			case 11:
				wor = 'B';
				break;
			case 12:
				wor = 'C';
				break;
			case 13:
				wor = 'D';
				break;
			case 14:
				wor = 'E';
				break;
			case 15:
				wor = 'F';
				break;
			}
			b = b + wor;
			s = s / 16;
		}
		for (int i = b.size() - 1; i > -1; i--)
		{
			result = result+b[i];
		}
		result = result + ' ';
	}
	cout << result << "  defolt" << endl;
	qq = result;
	return result;//реализовать возвращение стринга в мейн
}
int main()
{
	string tt;
	getline(cin, tt);
	perevod(tt);
	cout << tt<<"  main" << endl;
}