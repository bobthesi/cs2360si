#include<string>
#include<iostream>

#include "Bar.h";

using namespace std;

class Foo 
{
private:
	int a;
	string c;
	Bar b;
public:

	void printHello()
	{
		cout<<"Hello World"<<endl;
	}
	void mutatorfora(int b)
	{
		a = b;
	}
	int accessorfora()
	{
		return a;
	}
	double accessorforaccessor()
	{
		return b.getD();
	}

	void mutatorformutator(double f)
	{
		b.setD(f);
	}
};