#include<iostream>
#include<cstdlib>
using namespace std;

/*bool linearsearch(int arr[], int size, int target) {
	for(int i = 0; i<size; i++)
	{
		if(arr[i] == target)
		{
			return true;
		}
	}
	return false;
}*/

/*bool binarysearch(int arr[], int size, int target) {
	int top = size - 1;
	int bottom = 0;

	while(bottom <= top) {
		int mid = (top + bottom)/2;
		if(arr[mid] == target)
		{
			return true;
		}
		else if(arr[mid] < target)
		{
			bottom = mid + 1;
		}
		else 
		{
			top = mid - 1;
		}
	}
	return false;
}*/

int main() 
{
	char* cstring = "Hello There";
	//const int size = 5;
	//int arr[size] = {1,2,3,4,5};
	//linearsearch(arr, size, 0)
	/*if(binarysearch(arr, size, 0))
	{
		cout<<"Found it"<<endl;

	}
	else {
		cout<<"not found"<<endl;
	}*/

	for(int i = 0; cstring[i] != '\0'; i++)
	{
		if(isdigit(cstring[i]))
		{
			cout<<"Found a digit"<<endl;
		}
		else if(isalpha(cstring[i])) {
			cout<<"Found an alpha"<<endl;
		}
	}

	cin.get();
}