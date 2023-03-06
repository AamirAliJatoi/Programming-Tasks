#include<iostream>//Queue = FIFO (First In First Out)
using namespace std;
//varibale to initialize size of queue
int n;
//class queue
class queue{
	private:
		int *que;
		int front,back;
		public://assigning dynamically size to queue and defining value of front and back
			queue()
			{
				que = new int[n];
				front =-1;
				back=-1; 
			}
//function to enque(push/add) element in queue
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
	
//function to denque(pop/remove) element from queue
	void deque()
	{
		if(front == -1 || front > back)
		{
			cout<<"No element in the Queue!\n";
			return;
		}
		front++;
		cout<<endl<<"Head Element-> "<<peek();
	}
//function to peek(Return head) element from queue
	int peek()
	{
		if(front == -1 || front > back)
		{
			cout<<"No element in the Queue!\n";
			return -1;
		}
		return que[front];
	}
////function to see if the queue is empty
//	string isempty()
//	{	if(front == -1 || front > back)
//		{
//			return "Yes";
//		}
//		return "No";
//		
//	}
};

int main()
{
	int val,choice;
	cout<<"How much elements you want in the Queue?\n";
	cin>>n;
	queue q;
	for(int i = 0; i < n; i++)
	{
		cout<<"Enter "<<i+1<<" .Element --> ";
		cin>>val;
		q.enque(val);
	}
	cout<<endl<<"Head Element-> "<<q.peek()<<endl;
	cout<<"Do you want to deque an element ? (1 for yes and 0 for no)\n";
	cin>>choice;
	while(choice == 1)
	{
		q.deque();
		
		cout<<"\nDo you want to deque another element ? (1 for yes and 0 for no)\n";
		cin>>choice;
	}
}
