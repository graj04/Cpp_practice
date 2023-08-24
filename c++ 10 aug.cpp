#include<iostream>
using namespace std;

//int main()
//{
//	struct
//	{
//		int a;
//		string b;
//	}abc;
//	
//	
//	abc.a=2;
//	abc.b="c++ZM";
//	
//	cout<<abc.a<<"\n";
//	cout<<abc.b<<"\n";
//	
//	return 0;
//}

struct student
{
	char name[50];
	int age;
	float marks;
};
int main()
{
	student s1;
	cout<<"Enter Full Name: ";
	cin.get(s1.name,50);
	cout<<"Enter age: ";
	cin>>s1.age;
	cout<<"Enter marks:";

	if (s1.marks >=70)
	cout<<"pass";
	else if 
	(cout<<"fail");
	
	cout<<"\nDisplaying Information"<<endl;
	cout<<"Age: "<<s1.age<<endl;
	cout<<"marks: "<<s1.marks<<endl;
	
	if (s1.marks <=70)

	cout<<"Name: "<<s1.name<<endl;
	
	return 0;
}
