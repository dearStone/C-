#include <iostream>
using namespace std;

double power (double x, nt n); //计算x的n次方

int mian(){
	int value = 0;
	cout <<"enter an 8 bit binary number ";
	for(int i=7;i>=0;i--){
		char ch;
		cin >>ch;
		if(ch=='1')
			value+=static_cast<int>(power(2,i));
	}
	cout<<"Decimal value is "<<value<<endl;
	return 0;
}

double powe (double x, int n){
	double val =1.0;
	while(n--)
		val *=x;
	return val;
}
