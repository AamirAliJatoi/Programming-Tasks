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

//function created earlier
/*void remove()
{
	int elloc;
	cout<<"Which element do you want to remove please enter index: ";
	cin>>elloc;
	a[elloc] = 0;
}*/

//for removing and replacing index's
void rerange()
{
	int elloc;
	cout<<"\nWhich element do you want to remove please enter index: ";
	cin>>elloc;
	for(int i = 0; i<5; i++)
	if(a[elloc] == a[i])
	{
		for(int i = elloc; i<5; i++)
		{
			a[i] = a[i+1];
		}
		found++;
	}
}

int main()
{
	getdata();
	showdata();
	rerange();
	if(found == 0)
	cout<<"Element not found";
	else
	showdata();
	return 0;
}
