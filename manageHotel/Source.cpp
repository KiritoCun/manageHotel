#include "bill.h"
#include <iostream>
using namespace std;
#include <io.h>
#include <fcntl.h>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <iomanip>
#include <ctime>

// =============== KHAI BÁO CẤU TRÚC DANH SÁCH LIÊN KẾT ÐƠN ===============

// Khai báo cấu trúc 1 node
struct billNode
{
	bill data; // Dữ liệu chứa trong 1 node - 1 hóa đơn
	struct billNode* pNext; // con trỏ dùng để liên kết các node với nhau
};
typedef struct billNode BillNode;

// Khai báo cấu trúc danh sách liên kết đơn
struct listBill
{
	BillNode* pHead; // node quản lý đầu danh sách
	BillNode* pTail; // node quản lý cuối danh sách
};
typedef struct listBill ListBill;

// Khai báo cấu trúc 1 node
struct customerNode
{
	customer data; // Dữ liệu chứa trong 1 node - 1 hóa đơn
	struct customerNode* pNext; // con trỏ dùng để liên kết các node với nhau
};
typedef struct customerNode CustomerNode;

// Khai báo cấu trúc danh sách liên kết đơn
struct listCustomer
{
	CustomerNode* pHead; // node quản lý đầu danh sách
	CustomerNode* pTail; // node quản lý cuối danh sách
};

typedef struct listCustomer ListCustomer;

// Khai báo cấu trúc 1 node
struct roomNode
{
	room data; // Dữ liệu chứa trong 1 node - 1 hóa đơn
	struct roomNode* pNext; // con trỏ dùng để liên kết các node với nhau
};
typedef struct roomNode RoomNode;

// Khai báo cấu trúc danh sách liên kết đơn
struct listRoom
{
	RoomNode* pHead; // node quản lý đầu danh sách
	RoomNode* pTail; // node quản lý cuối danh sách
};
typedef struct listRoom ListRoom;


// =============== KHỞI TẠO CẤU TRÚC DANH SÁCH LIÊN KẾT ÐƠN ===============
void InitListRoom(ListRoom& list) {
	list.pHead = NULL;
	list.pTail = NULL;
}

void InitListCustomer(ListCustomer& list) {
	list.pHead = NULL;
	list.pTail = NULL;
}

void InitListBill(ListBill& list) {
	list.pHead = NULL;
	list.pTail = NULL;
}

// Hàm khởi tạo 1 node
BillNode* InitBillNode(bill b) {
	BillNode* p = new BillNode; // cấp phát vùng nhớ cho node p
	p->data = b;
	p->pNext = NULL;
	return p;
}


int main() {
	ListRoom listR;
	ListCustomer listC;
	ListBill listB;
	InitListRoom(listR);
	InitListCustomer(listC);
	InitListBill(listB); // khởi tạo danh sách

	time_t now = time(0);
	tm* ltm = localtime(&now);
	//int nam = 1900 + ltm->tm_year;
	//int thang = 1 + ltm->tm_mon;
	int ngay = ltm->tm_mday;
	cout << ngay;
	system("pause");
	return 0;
}
