#include <iostream> 
#include <iomanip> // Để setprecision cho TinhLuong bên dưới
#define AN_TRUA 600000
#define DI_LAI 300000
using namespace std; 
class NhanVien
{
private: 
	string name; 
	string address; 
	string birth; 
	int phone_number; 
public: 
	NhanVien() // Thiếu default constructor thì 
		   // constructor của subclass không hoạt động được
	{}
	NhanVien(string name, string address,
			string birth, int phone_number) // Viết cho chắc thôi 
	{
		this -> name = name; 
		this -> address = address;
		this -> birth = birth;
		this -> phone_number = phone_number; 
	}
	virtual void Nhap(); 
	virtual void Xuat(); 
	virtual float TinhLuong() = 0;
};
class FullTime: public NhanVien 
{ 
private:
	int LuongThoaThuan; 
public: 
	FullTime(int LuongThuaThuan)
	{ this -> LuongThoaThuan = LuongThoaThuan;}
	float TinhLuong()
	{ /* return theo công thức trên đề */}
	void Nhap(); 
	void Xuat(); 
};
class PartTime: public NhanVien 
{ 
private:
	int GioLamViec; 
public:
	PartTime(int GioLamViec)
	{ this -> GioLamViec = GioLamViec;}
	void Nhap();
	void Xuat();
	float TinhLuong()
	{ /* return theo công thức trên đề */}
};
class WonderTea
{
private:
	NhanVien **a; 
	int SoLuongNV; 
public: 
	WonderTea()
	{}
	WonderTea(int n)
	{ a = new NhanVien*[n+1]; }
	void NhapNV();
	void XuatNV();
	void LuongCaoNhat();
	void LuongDuoiTB(); 
};
/*----------------Overload_Operator-----------------*/
ostream &operator<<(ostream &os, WonderTea &obj)
{
	obj.NhapNV(); 
}
istream &operator>>(istream &is, WonderTea &obj)
{
	obj.XuatNV(); 
	obj.LuongCaoNhat(); 
	obj.LuongDuoiTB(); 
}
/*-------------------------------------------------*/

int main()
{ 
	WonderTea a(30); 
	cin >> a;
	cout << a;
	system("pause"); 
}
/*---------------------WonderTea-------------------*/
void WonderTea::NhapNV()
{
	/* Hoàn thiện hàm */
}
void WonderTea::XuatNV()
{
	/* Hoàn thiện hàm */
}
void WonderTea::LuongCaoNhat()
{
	/* Hoàn thiện hàm */
}
void WonderTea::LuongDuoiTB()
{
	/* Hoàn thiện hàm */
	
}
/*-------------------------------------------------*/
/*---------------------Nhap------------------------*/
void NhanVien::Nhap()
{ 
	/* Hoàn thiện hàm */

}
void PartTime::Nhap()
{
	/* Hoàn thiện hàm */

}
void FullTime::Nhap()
{
	/* Hoàn thiện hàm */

}
/*-------------------------------------------------*/


/*---------------------Xuat------------------------*/
void NhanVien::Xuat()
{ 
	/* Hoàn thiện hàm */
}
void PartTime::Xuat()
{
	/* Hoàn thiện hàm */
	
}
void FullTime::Xuat()
{
	/* Hoàn thiện hàm */

}
/*-------------------------------------------------*/
