#include<iostream>
#include<array>
using namespace std;
int main()
{
	array<int,5> arr{4,2,9,7,6};
	for(auto i:arr)
	 	cout<<i<<" ";
	cout<<endl;
	cout<<arr[0]<<" ";
	cout<<arr[1]<<" ";
	cout<<arr[2]<<" ";
	cout<<arr[3]<<" ";
	cout<<arr[4]<<" ";
	arr[4]=10;
	arr[2]=101;
	cout<<endl;
		for(auto i:arr)
	 	cout<<i<<" ";
	return 0;
}
