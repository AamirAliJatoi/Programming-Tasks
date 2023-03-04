#include<iostream>
using namespace std;
int a[5];
int found = 0;	
int getdata(){
	cout<<"\nEnter data in 5 arrays: ";
	for(int i = 0; i<5; i++)
	{
		cin>>a[i];
	}	
}
void showdata(){
	for(int i = 0; i<5; i++)
	{
		cout<<"\na["<<i<<"] = "<<a[i];
	}		
}

void remove()
{
	int elloc;
	cout<<"\n\nWhich element do you want to remove please enter index: ";
	cin>>elloc;
	for(int i = 0; i<5; i++)
	if(a[elloc] == a[i])
	{
		a[elloc] = 0;
		found++;
	}
}

int main()
{
	getdata();
	showdata();
	remove();
	if(found == 0)
	cout<<"\nInvalid Index!";
	else
	showdata();
	return 0;
}

