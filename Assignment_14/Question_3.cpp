#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1={12,5,43,19};
	for(auto i:v1)
	  cout<<i<<" ";
	cout<<endl;
	vector<int>::iterator it=v1.begin();
	for(it;it!=v1.end();it++)
	 cout<<*it<<" ";
	return 0;
}
