#include<iostream>
using namespace std;
class evaluation
{ 
int roll;
int chem;
int phy;
int maths;
float percenatge;
public:
	
void takeinput(){
	cout<<"Enter your roll no.";
	cin>>roll;
	int m1;
	cin>>m1;
	int m2;
	cin>>m2;
	int m3;
	cin>>m3;
	
	
}
void calculatePercentage(){
	per=(m1+m2+m3/300);
	cout<<per<<endl:
		
	
}
void displayGrade(){
	if (per=>90)
	{
	cout<<"Grade A"}
	if (per<90 && per>70)
	{
		cout<<"Grade B";
	} 
	if (per<70 && per>50){
		cout<<"Grade c";
	}
	if (per<50 && per>33){
		cout<<"Grade D";
	}
};
int main()
{
	evaluation r1;
	r1.takeinput();
	r1.displayGrade();
	r1.calculatePercentage();
	return 0;
}
