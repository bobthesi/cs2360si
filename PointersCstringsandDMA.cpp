#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main() 
{
	

	/*string* c = nullptr;
	string hello = "Hello World";
	c = &hello;

	//cout<<*c<<endl;

	string *b = c;

	//cout<<b<<endl;

	string* *a;
	a = &b;
	cout<<a<<endl;
	cout<<*a<<endl;
	cout<<**a<<endl;
	//b's address
	
	/*int* a;
	int b = 5;
	a = &b;
	*a = 4;
	
	int *newint = new int[4];
	
	double *newdouble = new double;
	delete newdouble;

	delete[] newint;*/

	/*int  h = 6;
	int *a = &h;
	int *b = &h;
	cout<<(a > b)<<endl;
	*/

	//Starting C-strings
	/*char* hello = "h3ll0 w0r1d";
	for(int i = 0; hello[i] != '\0'; i++)
	{

	
	if(isdigit(hello[i]))
		cout<<"is digit"<<endl;
	}*/

	int arr[5] = {1,2,3,4,5};
	int* brr = arr;
	for(int i = 0; i<5; i++)
	{
		cout<<*(brr + i)<<endl;
		//cout<<brr[i]<<endl;
	}

	cin.get();
	cin.ignore();
}
