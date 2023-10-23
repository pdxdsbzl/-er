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
	cout<<"请输入苹果重量"<<endl;
	cin>>appleWeight;
	cout<<"请输入香蕉重量"<<endl;
	cin>>bananaWeight;
	total=applePrice*appleWeight+bananaPrice*bananaWeight;
	
	cout<<"应付款"<<total<<endl;
	return 0;
}