#include <iostream>
 using namespace std;
 
 //计算x的n次方
 double power(double x,int n){
	double val =1.0;
	while(n--)
		val *=x;
	return val;
 }

 int main(){
	double pow;
	pow=power(5,2);
	cout<<"5 to the power 2 is"<<pow<<endl;
	return 0;
 }

