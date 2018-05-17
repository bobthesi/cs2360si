#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void writeToFile(fstream& f, string name)
{
	cout<<"Inside the function"<<endl;
	f.open(name, ios::out);
	f<<"Writing from inside the function";
	f.close();
}

int main()
{
	/*ofstream f;
	f.open("Test1.txt");

	f << "Hello world" << endl;

	f.close();*/
	/*
	fstream f2;
	f2.open("Test1.txt", ios::out);

	f2<<"Hello for the third time, world"<<endl;

	f2.close();
	

	ifstream fin;
	fstream fread;

	fread.open("Test1.txt", ios::in);
	fin.open("Test2.txt");

	if(!fread)
	{
		cout<<"not able to open Test1.txt"<<endl;
	}
	else if(!fin)
	{
		cout<<"Not able to open Test2.txt"<<endl;
		fin.close();
	}
	char c;
	string s;
	while(!fread.eof())
	{
		c = fread.get();
		cout<<c<<endl;
		fread >> s;
		cout<<s<<endl;
		getline(fread, s);
		cout<<s<<endl;
	}
	*/

	
	fstream f;
	string name;
	cout<<"Enter a name for the file"<<endl;
	cin>>name;
	writeToFile(f, name);
	
	cin.get();
	cin.ignore();
	//cin.ignore();
}