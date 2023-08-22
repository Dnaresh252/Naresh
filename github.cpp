#include<iostream>
using namespace std;
class hii
{
	private:
		int a,b;
	public:
	    void setdata(int k,int l)
		{
			a=k;
			b=l; 
		}
		
		int modf(int l,int n);
		
};
hii::modf(int l,int n)
{
	this->a=l;
	this->b=n;
	cout<< a*b;
}
int main()
{
	hii ob1;
	ob1.setdata(4,5);
	ob1.modf(5,6);
	
}
