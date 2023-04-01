#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
	forward_list<int> l1{11,42,77,14};
	l1.push_front(104);
	forward_list<int>::iterator it=l1.begin();
	cout<<"Iterator points to the first element "<<*it<<endl;   
	for(;it!=l1.end();it++)
	 cout<<*it<<" ";
	return 0;
}
