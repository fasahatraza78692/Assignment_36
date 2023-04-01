#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1;
	v1.push_back(12);
	v1.push_back(17);
	v1.push_back(11);
	v1.push_back(7);

	vector<int>::iterator it=v1.begin();
	for(;it!=v1.end();it++)
	 cout<<*it<<" ";
	return 0;
}
