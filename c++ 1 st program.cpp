#include<iostream>
using namespace std;


int main()
{
	int i;
	int number ;
	cin>>number;
	for (i=2;i<=number/2;i++)
	if (number %i==0){
	
	
	cout<<"The number is   prime";
	break;}
	
	else
	{
	cout<<"The number is not prime";}
return 0;
	
	
	
}
/*
void check(int n){
if (n>0) cout<<"Positive ";
else if (n<0) cout<<"Negative";
else cout<<"Zero";

}
int main(){
int num;
cout<<"Enter a number";
cin>> num;
check(num);
}
*/
//class marks
//{
//	public:
//		int marks;
//		
//		void()pass or fail()
//		{
//			if (marks>33)
//			cout<<"Student is pass";
//			else
//			cout <<"student is fail";
//			}
//			
//		};
//int main()
//{
//	marks m1,m2;
//	m1.marks=4;
//	m1.fail()
//	m2.marks=50;
//	m2.fail()
//	
//	return 0;
//}
//	
//} 
//		
//}
//};
