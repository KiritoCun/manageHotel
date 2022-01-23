#include<iostream>
#include<string>
using namespace std;

enum gender {
	male,
	female,
	other
};
class customer
{
private:
	int customerId;				 // Mã khách hàng
	string customerName;		 // Tên khách hàng
	string numberIndentityCard;  // Số chứng minh nhân dân
	gender g;		 // Giới tính khách hàng ( 0 -> nam; 1 -> nữ; 2 -> khác )
public:
	customer();
	customer(int a, string b, string c, gender g);
	customer(const customer& d);
	~customer();
	const customer& operator=(const customer& customer);
	friend ostream& operator<<(ostream& out, const customer& customer);
	friend istream& operator>>(istream& in, customer& customer);
};

