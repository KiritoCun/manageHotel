#include "customer.h"
customer::customer()
{
	this->customerId = 0;
	this->customerName = "";
	this->numberIndentityCard = "";
}
customer::customer(int a, string b, string c, gender g)
{
	this->customerId = a;
	this->customerName = b;
	this->numberIndentityCard = c;
	this->g = g;
}
customer::customer(const customer& d)
{
	this->customerId = d.customerId;
	this->customerName = d.customerName;
	this->numberIndentityCard = d.numberIndentityCard;
}

customer::~customer()
{
}

const customer& customer::operator=(const customer& customer)
{
	if (this != &customer)
	{
		this->customerId = customer.customerId;
		this->customerName = customer.customerName;
		this->numberIndentityCard = customer.numberIndentityCard;
	}
	return *this;
}

ostream& operator<<(ostream& out, const customer& customer)
{
	cout << "customerId:"; out << customer.customerId << "  ";
	cout << "customerName :"; out << customer.customerName << "  ";
	cout << "numberIndentityCard :"; out << customer.numberIndentityCard << endl;
	return out;
}

istream& operator>>(istream& in, customer& customer)
{
	cout << "Nhap customerId :"; in >> customer.customerId;
	cout << " \t\t     customerName :"; in >> customer.customerName;
	cout << " \t\t       numberIndentityCard :"; in >> customer.numberIndentityCard;
	return in;
}
