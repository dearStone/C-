#include <iostream>
 using namespace std;

 int main(){
	int i=1;
	int j;
	int sum1 =0;
	int sum2 =0;
//start
// do-while	
	do{
		sum1 =+i;
		i++;
	}while(i<=10);
	cout <<"sume = "<< sum1 <<endl;

// for
	for(j=0;j<11;j++){
		sum2 =+i;
	}
	cout <<"sume = "<< sum2 <<endl;

// end
	return 0;
 }
