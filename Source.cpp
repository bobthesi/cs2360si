#include<iostream>
#include<string>
using namespace std;

class Foo
{
	int* a;
	string b;
	int size;

public:
	Foo()			//Default
	{
		cout<<"Inside the constructor"<<endl;
	}
	Foo(string name)		//Overloaded
	{
		b = name;
	}

	Foo(int s)
	{
		size = s;
		a = new int[size];
	}
	void sayHello()
	{
		cout<<"Hello"<<endl;
	}

	void setArray(int value, int index)
	{
		a[index] = value;
	}

	int getArray(int index)
	{
		return a[index];
	}

	string getB()
	{
		return b;
	}

	int getSize()
	{
		return size;
	}
	~Foo()
	{
		cout<<"Exiting the class"<<endl;
		delete[] a;
	}
};

/*
void throwAwayFunction()
{
	Foo g;
	g.sayHello();
}*/

int main()
{
	/*Foo f("Bob");
	cout<<f.getB();
	//f.sayHello();
	*/
	//throwAwayFunction();

	Foo f(5);

	cout<<f.getSize()<<endl;
	
	int value;
	
	for(int i = 0; i<5; i++)
	{
		cin>>value;
		f.setArray(value,i);
	}

	cout<<f.getArray(4);
	cin.ignore();
	cin.get();
}