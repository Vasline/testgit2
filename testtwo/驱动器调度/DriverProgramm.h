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
	cout << "��ʼ����......" << endl;
	cout << "�ű�������0�ŵ��ϣ�" << endl;
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
	cout << "��ǰ���õĽ���Ϊ: " <<proName  <<"\t"<< "�����:"<<zhuSno<<"\t"  << "�ŵ���:"<<ciSno <<"\t" << "�����¼��:"<<phySno << endl;
}
void Driver::DriverRun(Driver *driver,int length)
{	
	cout << "�������" << endl;
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
		cout << "�Ƿ�������!" << endl;
		cin >> b;
		if (b == "��") {
			driver[i].DisplayInformation();
		}
		
	}
	/*for (int i = 0; i < length; i++) {
		cout << "��ǰ����Ϊ:" << driver[i].proName << " �����:" << driver[i].zhuSno << " �ŵ���:" << driver[i].ciSno << " �����¼��:" << driver[i].phySno << endl;
	}*/
}
