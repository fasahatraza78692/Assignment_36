#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);
    cout<<"Top most element of the stack: "<<s1.top();
	return 0;
}
