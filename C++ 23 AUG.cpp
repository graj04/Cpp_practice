//#include<iostream>
//#include <string.h>
//using namespace std;
//class employee
//{
//	private:
//		int emp_id;
//		char emp_Name[10];
//		int salary;
//	public:
//		static int objectCount;
//		employee()
//		{
//			objectCount++;
//		}
//		void getdata()
//		{
//			cout<<"Enter emp_id : "<<endl;
//			
//			cin>>emp_id;
//			
//			cout<<"Enter the name: "<<endl;
//			
//			cin>>emp_Name;
//			
//			cout<<"Enter the salary: "<<endl;
//			
//			cin>>salary;
//			
//		}
//		
//		void putdata()
//		{
//			cout<<"emp_id ="<<emp_id<<endl;
//			
//			cout<<"Name ="<<emp_Name<<endl;
//			
//			cout<<"Salary ="<<salary<<endl;
//			cout<<endl;
//		}
//};
//
//int employee::objectCount=0;
//int main(void)
//{
//	employee e1;
//	e1.getdata();
//	e1.putdata();
//	employee e2;
//	e2.getdata();
//	e2.putdata();
//	employee e3;
//	e3.getdata();
//	e3.putdata();
//	cout<<"Total objects created="<<
//	employee::objectCount<<endl;
//	
//	return 0;
//	
//}

// write a program calculate the area of circles using static data members and static member function.

#include<iostream>
using namespace std;
class circle;{
private:
	static double pi;
	
public:
	static void setpi
	{
		pi=value;
	}
	static double CalculateArea
	{
		return pi*radius*radius;
	}
	
};

double circle::pi = 3.1415;

int main

	
