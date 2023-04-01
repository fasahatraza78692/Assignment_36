#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int> dq={12,49,75,68,2};
	cout<<"Deque in reverse order "<<endl;
	for(auto it=dq.rbegin();it!=dq.rend();it++)
	  cout<<*it<<" ";
	return 0;
}
