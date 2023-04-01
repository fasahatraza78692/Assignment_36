#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> s1;
	s1.push(11);
	s1.push(101);
	s1.push(110);
	s1.push(111);
	s1.push(1);
    while(!s1.empty())
     {
     	cout<<s1.top()<<" ";
     	s1.pop();
	 }
	return 0;
}
