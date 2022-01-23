#include<string>
#include<iostream>
using namespace std;
class room
{
private:
	string numberRoom;		// Số phòng
	string typeRoom;		// Loại phòng
	int price;			// Giá phòng (theo ngày)
public:
	room();
	room(string a, string b, int c);
	~room();
	friend ostream& operator<<(ostream& out, const room& room);
	friend istream& operator >>(istream& in, room& room);
	int getPrice();
};

