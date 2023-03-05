#include<iostream>
using namespace std;

int n;

class queue{
	private:
		int *que;
		int front,back;
		public:
			queue()
			{
				que = new int[n];
				front =-1;
				back=-1; 
			}

	void enque(int x)
	{
		if(back == n-1)
		{
			cout<<"Queue Overvflowed!\n";
			return;
		}
		back++;
		que[back] = x;
		if(front == -1)
			front++;
	}
	
	void deque()
	{
		if(front == -1 || front > back)
		{
			cout<<"No element in the Queue!\n";
			return;
		}
		front++;
	}
	
	int peek()
	{
		if(front == -1 || front > back)
		{
			cout<<"No element in the Queue!\n";
			return -1;
		}
		return que[front];
	}
	
	string isempty()
	{	if(front == -1 || front > back)
		{
			return "Yes";
		}
		return "No";
		
	}
};

int main()
{
	int val;
	cout<<"How much elements you want in the Queue?\n";
	cin>>n;
	queue q;
	for(int i = 0; i < n; i++)
	{
		cout<<"Enter "<<i+1<<"Element --> ";
		cin>>val;
		q.enque(val);
	}
	
	cout<<"Head Element-> "<<q.peek()<<endl;
	q.deque();
	cout<<"Head Element-> "<<q.peek()<<endl;
	q.deque();
	cout<<"Head Element-> "<<q.peek()<<endl;
	q.deque();
	
}
