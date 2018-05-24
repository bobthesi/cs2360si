#include<iostream>
#include<string>

#include "Foo.h";

using namespace std;




int main()
{
	Foo f;
	f.mutatorfora(5);
	cout<<f.accessorfora()<<endl;
	f.mutatorformutator(5.5);
	cout<<f.accessorforaccessor()<<endl;
	cin.get();
}