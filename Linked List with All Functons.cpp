#include<iostream>
using namespace std;
//NODE CLASS
class Node{
	public:
		int value;
		Node* next;
		//NODE CLASS CONSTRUCTOR TO assign values to the members
		Node(int val)
		{
			value = val;
			next = NULL;
		}
};
//function to store newly added elements
void insertnew(Node* &head, int val)
{
	Node * n = new Node(val);
	Node* temp = head;

	if(head == NULL)
	 {	
		head = n;
	 	return;
	 }
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next= n;
}
//function to insert new element at intial or head point
void insertathead(Node* &head, int val)
{
	Node * n = new Node(val);
	n->next = head;
	head = n;
}
//function to add an element at a given index
void insertatgiven(Node* &head,int ind, int val)
{
	Node * index = new Node(val);
	Node * temp = head;
	for(int i=1; i< ind; i++){
		temp = temp->next;
	}
	index->next = temp->next;
	temp->next = index;
}
//delete head element function
void removeathead(Node* head)
{
	Node* todelete = head;
	head = head->next;
	delete[] todelete;
	
}

//delete specific element function
void remove(Node* head,int val)
{
	if(head == NULL)
	{
		return;
	}
	else if(head->next == NULL)
	{
		removeathead(head);
		return;		
	}
	Node* temp = head;
	while(temp->next->value != val)
	{
		temp = temp->next;
	}
		Node* todelete = temp->next;
		temp->next = temp->next->next;
		delete[] todelete;
	
}
//function to display list elements
void display(Node* head)
{
	Node* temp = head;
	while(temp != NULL)
	{
		cout<<"->  "<<temp->value<<endl;
		temp = temp->next;
	}
}
//main function
int main()
{
	//initializing size, value and delete variable to ask the user how much size it wants and value to ask user what value it wants and to ask user what to delete
	int size,val,dlt;
	//new var to add into head value and at given index
	int athead,atgiven,givenind;
	cout<<"How much values you want to add in the link: ";
	cin>>size;
	//initialy sending null value to the head
	Node* head = NULL;
	//in the loop whenever the insertnew function is called it will send new pointer head and the value entered by the user
	for(int i = 1; i <= size; i++)
	{
		cout<<i<<" value-> ";
		cin>>val;
		insertnew(head,val);
	}
	//displaying all the values
	cout<<endl<<"\n\nDisplaying values Entered Now\n";
	display(head);
	
	 cout<<"\nEnter element you want to add at the head position: ";
	 cin>>athead;
	 insertathead(head,athead);
	
	 cout<<endl<<"\n\nDisplaying values after inserted new element at head\n";
	 display(head);
	
	 cout<<"\n\nEnter index where you want to add at the element: ";
	 cin>>givenind;
	 if(givenind >size ||givenind <=0)
	 {
	 	cout<<"Index Not Found!";
	 }
	 else{
	 	cout<<"\nEnter element you want to add at position no: "<<givenind<<" =  ";
	 	cin>>atgiven;
	
	 	insertatgiven(head,givenind,atgiven);
	 	cout<<endl<<"\n\nDisplaying values after inserted new element position no: "<<givenind<<endl<<endl;
	 	display(head);
	 }
	cout<<"\nEnter element you want to delete: ";
	cin>>dlt;
	remove(head,dlt);
	
	cout<<endl<<"\n\nDisplaying values after deleting : "<<dlt<<endl<<endl;
	display(head);
	
	removeathead(head);
	cout<<endl<<"\n\nDisplaying values after deleting head element : "<<dlt<<endl<<endl;
	display(head);
	
	
}
