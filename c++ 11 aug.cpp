#include <iostream>
using namespace std;

union data {
	int number;
	float value;
	char yourname;
	
	
};

int main()
{
	data mydata;
	mydata.number=484146;
	cout<<"the number here is: "<<mydata.number<<endl;
	
	mydata.value=69.69696969;
	cout<<"the value here is: "<<mydata.value<<endl;
	
	mydata.yourname= 'D';
	cout<<"the char value: "<<mydata.yourname<<endl;
	
	return 0;
}
