

#include <iostream>
using namespace std; 
int main()
{ 
	cout << "The size  of int data type  is" << sizeof(int) << "\n";
	cout << "The size of long data type  is" << sizeof(long) << "\n";
	cout << "The size of short data type  is" << sizeof(short) << "\n";

	cout << "The size of bool  data type  is" << sizeof(bool) << "\n";
	cout <<"The size of  char data type  is" << sizeof(char) << "\n";

	cout << "The size of long long  data type  is" << sizeof(long long) << "\n";
	cout <<"The size of float data type  is" << sizeof(float) << "\n";
	cout << "The size of double data type  is" << sizeof(double) << "\n";
	cout << "The size of long double datatype  is" << sizeof(long double) << "\n";

	cout << "the range of int is :" << INT_MIN << "," <<INT_MAX << endl;
	cout << "the range of SHORT is :" << SHRT_MIN << "," << SHRT_MAX << endl;
	cout << "the range of long is :" << LONG_MIN << "," << LONG_MAX << endl;
	cout << "the range of long long int is :" <<LLONG_MIN << "," << LLONG_MAX << endl;
	cout << "the range of unsigned int is :" <<"0" << "," << UINT_MAX << endl;
	cout << "the range of UNSIGNED LONG LONG INT  is :" << "0" << "," << ULLONG_MAX << endl;
	cout << "the range of UNSIGNED SHORT INT is :" << "0" << "," << USHRT_MAX << endl;
	cout << "the range of CHAR is :" << CHAR_MIN << "," << CHAR_MAX << endl;
	cout << "the range of UNSIGNED CHAR is :" << "0" << "," << UCHAR_MAX << endl;
	cout << "the range of FLOAT is :" <<FLT_MIN << "," << FLT_MAX << endl;
	cout << "the range of DOUBLE is :" << DBL_MIN << "," << DBL_MAX << endl;

	cout << "the range of LONG DOUBLE  is :" << LDBL_MIN << "," << LDBL_MAX << endl;

	cout << "the range  of -DOUBLE is :" << -DBL_MIN << "," <<-DBL_MAX << endl;

	return 0;



}
