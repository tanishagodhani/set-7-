#include<iostream>
#include<string.h>

using namespace std;

class A
{
	public :
		void get()
		{
			cout<<"mother name = kelly brown "<<endl;
			cout<<"age = 51 years"<<endl;
			
			
		}
};
class B : public A
{
     public :	
     
     void display()
     {
     	cout<<"daughter name = millie bobby brown"<<endl;
			cout<<"age = 19 years"<<endl;
	 }
};
int main()
{
	B d;
	
	d.display();
	cout<<"______________________________--"<<endl;
	d.get();
	return 0;
	
}
