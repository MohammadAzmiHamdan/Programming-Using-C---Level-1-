

#include <iostream>
using namespace std;

int main()
{ /*prefix  ( ++A , --A ) POSTFIX ( A++  , A-- )*/

	int a = 100;
	cout << "a = "<<a<<endl;
	a++;
	cout << "a++ = " << a << endl;// Same as a=a+1 .
	++a;
	cout << "++a = " << a << endl;// Same as a=a+1 . 
	int b = 100;
	cout << "b = " << b << endl;
	--b;
	cout << "--b =" << b << endl;// Same as b=b-1 . 
	b--;
	cout << "b-- = " <<b << endl;// Same as b=b-1 . 



	int c = 100;
	cout << "C = " << c << endl;
	int H, G,F;
	H = c++;
	cout << "whin c++  (postfix)\n H=" << H << endl<<"c="<<c<<endl;
	H = c--;
	cout << "whin c--  (postfix)\n H=" << H << endl << "c=" << c << endl;
	G = 100;
	cout << "G=" << G <<endl;
	F = ++G;
	cout << "whin ++G  ( PREFIX) \n F=" << F << endl << "G=" << G << endl;
	F= --G;
	cout << "whin --G  (PRIFIX)  \n F=" << F << endl << "G=" << G << endl;
	return 0;




}

