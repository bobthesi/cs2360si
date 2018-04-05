/*
	Intro to reference variables
	Date: 4/5/18
*/

#include<iostream>

using namespace std;
//Bonus: Syntax for using function prototypes with reference variables
//You NEED the & in the prototype, if you're going to use it in the function header 
void makeItSix(int&); //If we were to remove the '&' sign, what would the value of a be when called from main?

int main()
{
	int a = 5;
	cout<<a<<endl;

	makeItSix(a);

	cout<<a<<endl; //what would make this value change?
	cin.get();
}

void makeItSix(int &a)
{
	a = 6;		
}
