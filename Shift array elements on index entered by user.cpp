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

void shift()
{
	int indf,indto,temp;
	cout<<"\n\nWhich element do you want to shift please enter index: ";
	cin>>indf;
	for(int i = 0; i<5; i++)
	if(a[indf] == a[i])
	{
		cout<<"\n\nWhere do you want to shift this element please enter index: ";
		cin>>indto;
		temp = a[indto];
		a[indto] = a[indf];
		a[indf] = temp;
		found++;
		cout<<"Element shifted";
	}
	
}

int main()
{
	getdata();
	showdata();
	shift();
	if(found == 0)
	cout<<"\nInvalid Index!";
	else
	showdata();
	return 0;
}

