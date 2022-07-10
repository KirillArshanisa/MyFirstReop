#ifndef COMPLEX_H 
#define COMPLEX_H 

#include <iostream>
using std::ostream;
using std::istream;

class Complex
{
	friend istream &operator>>(istream&, Complex&);
	friend ostream &operator<<(ostream&, const Complex&);
public:
	Complex(double = 0.0, double = 0.0); // ����������� 
	Complex operator+(const Complex&) const; // �������� 
	Complex operator-(const Complex&) const; // ��������� 
	bool operator==(const Complex&) const;
	bool operator!=(const Complex& complex) const
	{
		return !(*this == complex);
	}
	Complex operator*(const Complex&) const;
private:
	double real; // �������������� ����� 
	double imaginary; // ������ ����� 
}; // ����� ������ Complex 

#endif 
