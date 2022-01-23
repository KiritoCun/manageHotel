#include "bill.h"
bill::bill()
{
}

bill::bill(int id, customer a, room b, date c, date d)
{
	this->billId = id;
	this->c = a;
	this->r = b;
	this->dateTo = c;
	this->dateLeave = d;
	this->payment = (d.dateToPositon() - c.dateToPositon())*b.getPrice();
}

bill::~bill()
{
}

int bill::getId()
{
	return this->billId;
}

void bill::setId(int b)
{
	this->billId = b;
}

ostream& operator<<(ostream& out, const bill& b)
{
	cout << "Ma hoa don:"; out << b.billId << "  ";
	cout << "Khach hang:"; out << b.c << "  ";
	cout << "Phong     :"; out << b.r << "  ";
	cout << "Ngay den  :"; out << b.dateTo << "  ";
	cout << "Ngay di   :"; out << b.dateLeave << endl;

	return out;
}

istream& operator>>(istream& in, bill& b)
{
	cout << "Nhap ma hoa don :"; in >> b.billId;
	cout << "Nhap ngay :"; in >> b.c;
	cout << " \t\t     thang :"; in >> b.r;
	cout << " \t\t       nam :"; in >> b.dateTo;
	cout << " \t\t       nam :"; in >> b.dateLeave;
	return in;
}
