#include<iostream>
using namespace std;
//creating stack and variables top and size
int* stack;
int top = 0,size;

//dynamically allocating memory to stack
void create(int a)
{
	stack = new int[a];
}

//push function to add elements to stack
void push(int a)
{
	stack[top] = a;
	top++;
}

//pop elements to delete elements from stack
void pop()
{
	if(top == 0)
	cout<<"Stack is Empty!";
	else
	top--;
	
}

int main()
{
	int a;//a variable for adding values
	char choice;//choice to ask user if he wants to delete/pop element
	cout<<"How much values you want to enter in the stack: ";
	cin>>size;//defining size variables value
	create(size);
	//loop to add values to stack
	for (int x = 0; x < size; x++)
	{
		cout<<x+1<<". Value ->";
		cin>>a;
		push(a);
	}
	//asking user if he wants to delete/pop values
	cout<<"Do you want to pop element press y for yes and n for no (y/n)? \n";
	cin>>choice;
	while(choice == 'y' || choice == 'Y')
	{
		pop();
		cout<<"\nDo You want to pop an other element (y/n)? \n";
		cin>>choice;
	}
	//loop to Traverse values
	for(int x = top-1; x >= 0; x--)
	cout<<endl<<stack[x];
}
