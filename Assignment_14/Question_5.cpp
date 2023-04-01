#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
	forward_list<int> l1{11,42,77};
	l1.push_front(14);
	l1.push_front(104);
	forward_list<int>::iterator it=l1.begin();
	for(;it!=l1.end();it++)
	 cout<<*it<<" ";
	l1.emplace_after(it=l1.begin(),110);
	l1.pop_front();
	 cout<<endl;
	 for(auto i:l1)
	  cout<<i<<" ";
	return 0;
}
