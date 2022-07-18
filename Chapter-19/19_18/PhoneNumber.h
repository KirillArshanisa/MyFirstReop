#ifndef PHONENUMBER_H 
#define PHONENUMBER_H 

#include <iostream> 
using std::ostream;
using std::istream;

#include <string> 
using std::string;

class PhoneNumber
{
	friend ostream& operator<<(ostream&, const PhoneNumber&);
	friend istream& operator>>(istream&, PhoneNumber&);
public:
	ostream& operator<<(ostream& ostream)
	{
		return ostream << *this;
	}
	//istream& operator>>(istream& istream)
	//{
	//	istream >> *this;
	//}

private:
	string areaCode; // 3 ����� ������������� ���� 
	string exchange; // 3 ����� ���� ��� 
	string line; // 4 ����� ������ ����� 
}; // ����� ������ PhoneNumber 

#endif 
