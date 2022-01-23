#include "room.h"
#include<string>
using namespace std;

room::room()
{
	this->numberRoom = "";
	this->typeRoom = "";
	this->price = 0;
}

room::room(string a, string b, int c)
{
	this->numberRoom = a;
	this->typeRoom = b;
	this->price = c;
}

room::~room()
{
}

int room::getPrice()
{
	return this->price;
}

ostream& operator<<(ostream& out, const room& room)
{
	cout << "So phong  :"; out << room.numberRoom << "  ";
	cout << "Loai phong:"; out << room.typeRoom << "  ";
	cout << "Gia phong :"; out << room.price << endl;
	return out;
}

istream& operator>>(istream& in, room& room)
{
	cout << "Nhap so phong   :"; in >> room.numberRoom;
	cout << " \t\tloai phong :"; in >> room.typeRoom;
	cout << " \t\tgia phong  :"; in >> room.price;
	return in;
}
