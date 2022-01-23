#include<string>
#include"customer.h"
#include"room.h"
#include"date.h"
using namespace std;
class bill
{
private:
	int billId;
	customer c;
	room r;
	date dateTo;
	date dateLeave;
	int payment;
public:
	bill();
	bill(int,customer, room, date, date);
	~bill();
	friend ostream& operator <<(ostream& out, const bill& day);
	friend istream& operator >>(istream& in, bill& day);
	int getId();
	void setId(int);
};

