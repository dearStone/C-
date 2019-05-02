#include <iostream>
using namespace std;
int main(){
	const double pi(3.14159);
	int radius(0);
	cout<<"Please ente the radius!\n";
	cin>>radius;
	cout<<"The radius id:"<<radius<<'\n';
	cout<<"PI is:"<<pi<<'\n';
	cout<<"Please enter a different radius!\n";
	cin>>radius;
	cout<<"Now the radius is changed to:"<<radius<<'\n';
	return 0;
}
