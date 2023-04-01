#include<iostream>
#include<array>
using namespace std;
int main()
{
	int count=0;
	array<int,10> ar{10,45,76,95,83,2,4,6,8,2};
	for(auto i:ar)
	    {
	    	count++;
		}
	cout<<"Total number of the given array: "<<count;
	return 0;
}
