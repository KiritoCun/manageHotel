#pragma once
#include<iostream>
using namespace std;
class date
{
private:
	int ngay;
	int thang;
	int nam;
public:
	date();
	date(int, int, int);
	date(const date&);
	~date();
	friend ostream& operator <<(ostream& out, const date& day);
	friend istream& operator >>(istream& in, date& day);
	const date& operator=(const date&);
	int dateToPositon();
	bool checkYear();
};

