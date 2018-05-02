#include<iostream>

using namespace std;
/*int* Foo(int a, int* b) {
	int* c;
	c = b;
	//cout<<c<<endl;
	return c;
}*/
int main() {
	/*int a = 4;
	int* b = &a;
	cout<<b<<endl;
	cout<<Foo(a, b)<<endl;*/
	//int *brr = nullptr;
	//int arr[5] = {1,2,3,4,5};
	//cout<<*arr<<endl;
	//brr = arr;
	//cout<<*brr<<endl;
	//cout<<brr[4]<<endl;
	//brr[2] = 12;
	//cout<<arr[2]<<endl;
	/*for(int i  = 0; i<5; i++)
	{
		cout<<*(arr + i)<<" ";
	}*/
	//cout<<endl;
	
	//Dynamic Memory Allocation
	//int *c = new int[5];
	/*int* p;
	p = new int;
	*p = 5;
	//cout<<*p<<endl;
	
	/*int arr[6] = {0,0,0,0,0,5};
	p = &(arr[5]);*/
	//delete p;
	//delete[] c;

	//int arr[5] = {6,9,56,23,1};
	/*bool found = false;

	for(int i = 0; i<5; i++)
	{
		if(arr[i] == 23)
		{
			found = true;
			break;
		}
	}
	if(found == true)
	{
		cout<<"found"<<endl;
	}
	else
		cout<<"Not found"<<endl;
	*/
	/*int target = 3;
	int top = 4;
	int bottom = 0;
	while(bottom <= top)
	{
		int mid = (top + bottom)/2;
		if(target == arr[mid])
		{
			cout<<"found"<<endl;
		}
		else if(target > arr[mid])
		{
			bottom = mid + 1;
		}
		else
		{
			top = mid - 1;
		}
	}
	*/
	cin.get();
}