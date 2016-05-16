#include<iostream>
#include<string>
using namespace std;
class Driver
{
public:
	char *proName;
	int zhuSno;
	int ciSno;
	int phySno;
	void Chushi();
	Driver();
	Driver(char *proName, int zhuSno, int ciSno, int phySno);
	void IOform();
	void DisplayInformation();
	void DriverRun(Driver driver[],int length);

};
Driver::Driver() {

}
void Driver::Chushi()
{
	cout << "初始化中......" << endl;
	cout << "磁臂首先在0磁道上！" << endl;
}
Driver::Driver(char *proName, int zhuSno, int ciSno, int phySno)
{
	this->proName = proName;
	this->zhuSno = zhuSno;
	this->ciSno = ciSno;
	this->phySno = phySno;
}
void Driver::IOform()
{
	Driver d[5] = { Driver("h", 199, 3, 49),
		Driver("u", 30, 5, 32),
	Driver("a", 20, 7, 21),
	Driver("n", 78, 8, 37),
	Driver("g", 65, 1, 13) };
	DriverRun(d, 5);
}
void Driver::DisplayInformation() {
	cout << "当前调用的进程为: " <<proName  <<"\t"<< "柱面号:"<<zhuSno<<"\t"  << "磁道号:"<<ciSno <<"\t" << "物理记录号:"<<phySno << endl;
}
void Driver::DriverRun(Driver *driver,int length)
{	
	cout << "方向向里！" << endl;
	for (int i = 0; i < length; i++) {
		for (int j = i; j < length; j++) {
			if (driver[i].zhuSno > driver[j].zhuSno) {
				Driver temp;
				temp = driver[i];
				driver[i] = driver[j];
				driver[j] = temp;
			}
		}
	}
	for (int i = 0; i < length; i++) {
		string b;
		cout << "是否有请求!" << endl;
		cin >> b;
		if (b == "否") {
			driver[i].DisplayInformation();
		}
		
	}
	/*for (int i = 0; i < length; i++) {
		cout << "当前进程为:" << driver[i].proName << " 柱面号:" << driver[i].zhuSno << " 磁道号:" << driver[i].ciSno << " 物理记录号:" << driver[i].phySno << endl;
	}*/
}
