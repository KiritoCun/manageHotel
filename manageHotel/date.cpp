#include "date.h"
date::date()
{
	ngay = 1;
	thang = 1;
	nam = 1970;
}
date::date(int a, int b, int c)
{
	this->ngay = a;
	this->thang = b;
	this->nam = c;
}
date::date(const date& d)
{
	this->ngay = d.ngay;
	this->thang = d.thang;
	this->nam = d.nam;
}

date::~date()
{
}

const date& date::operator=(const date& day)
{
	if (this != &day)
	{
		this->ngay = day.ngay;
		this->thang = day.thang;
		this->nam = day.nam;
	}
	return *this;
}

int date::dateToPositon()
{
	int position = 0;
	switch (thang) {
	case 1:position = this->ngay;
		break;
	case 2:position = 31 + this->ngay;
		break;
	case 3:
		position = 59 + this->ngay;
		if (checkYear()) position++;
		break; 
	case 4:
		position = 90 + this->ngay;
		if (checkYear()) position++;
		break;
	case 5:
		position = 120 + this->ngay;
		if (checkYear()) position++;
		break;
	case 6:
		position = 151 + this->ngay;
		if (checkYear()) position++;
		break;
	case 7:
		position = 181 + this->ngay;
		if (checkYear()) position++;
		break;
	case 8:
		position = 212 + this->ngay;
		if (checkYear()) position++;
		break;
	case 9:
		position = 243 + this->ngay;
		if (checkYear()) position++;
		break;
	case 10:
		position = 273 + this->ngay;
		if (checkYear()) position++;
		break;
	case 11:
		position = 304 + this->ngay;
		if (checkYear()) position++;
		break;
	case 12:
		position = 334 + this->ngay;
		if (checkYear()) position++;
		break;
	default:
		cout << "So ban nhap khong dung";
	}

	return position;
}

bool date::checkYear()
{
	if (this->nam % 400 == 0)
		return true;
	if (this->nam % 4 == 0 && this->nam % 100 != 0)
		return true;
	return false;
}

ostream& operator<<(ostream& out, const date& day)
{
	cout << "Ngay:"; out << day.ngay << "  ";
	cout << "thang :"; out << day.thang << "  ";
	cout << "nam :"; out << day.nam << endl;
	return out;
}

istream& operator>>(istream& in, date& day)
{
	cout << "Nhap ngay :"; in >> day.ngay;
	cout << " \t\t     thang :"; in >> day.thang;
	cout << " \t\t       nam :"; in >> day.nam;
	return in;
}
