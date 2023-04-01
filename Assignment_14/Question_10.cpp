#include<iostream>
#include<queue>
#include<ctime>
#include<cstring>
using namespace std;
class ticket
{
	string name;
	int tnumber;
	  public:
	  	ticket Ticket()
	  	 {
	  	 	ticket temp;
	  	 	cout<<"Enter Passenger name: ";
	  	 	cin>>temp.name;
	  	 	srand(time(NULL));
	  	 	temp.tnumber=rand();
	  	 	return temp;
		 }
		void Display()
		 {
		 	cout<<"Passenger Name : "<<name<<endl;
		 	cout<<"Ticket Number  : "<<tnumber<<endl;
		 	cout<<"----------------------------------"<<endl;
		 }
};
int main()
{
	ticket t;
	queue<ticket> q;
	q.push(t.Ticket());
	q.push(t.Ticket());
	q.push(t.Ticket());
	q.push(t.Ticket());
	cout<<endl<<"Passenger's Detail..."<<endl;
	cout<<"----------------------------------"<<endl;
	while(!q.empty())
	 {
		t=q.front();
		t.Display();
	 	q.pop();
	 }
	return 0;
}
