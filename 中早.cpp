#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float applePrice=3.5;
	float bananaPrice=4.2;
	float appleWeight=0.0;
	float bananaWeight=0.0;
	float total=0.0;
	cout<<"������ƻ������"<<endl;
	cin>>appleWeight;
	cout<<"�������㽶����"<<endl;
	cin>>bananaWeight;
	total=applePrice*appleWeight+bananaPrice*bananaWeight;
	
	cout<<"Ӧ����"<<total<<endl;
	return 0;
}