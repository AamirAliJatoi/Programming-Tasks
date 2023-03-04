#include<iostream>
using namespace std;

int* stack;
int top = 0,size;

void create(int a)
{
	stack = new int[a];
}
void push(int a)
{
	stack[top] = a;
	top++;
}
void pop()
{
	if(top == 0)
	cout<<"Stack is Empty!";
	else
	top--;
	
}

int main()
{
	int a,p;
	char choice;
	cout<<"How much values you want to enter in the stack: ";
	cin>>size;
	create(size);
	for (int x = 0; x < size; x++)
	{
		cout<<x+1<<". Value ->";
		cin>>a;
		push(a);
	}
	cout<<"Do you want to pop element press y for yes and n for no (y/n)? \n";
	cin>>choice;
	while(choice == 'y' || choice == 'Y')
	{
		pop();
		cout<<"\nDo You want to pop an other element (y/n)? \n";
		cin>>choice;
	}
	for(int x = top-1; x >= 0; x--)
	cout<<endl<<stack[x];
}
