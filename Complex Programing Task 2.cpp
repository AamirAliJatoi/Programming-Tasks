#include<iostream>
#include<stdlib.h>
using namespace std;

//creating list 
int *ContactList;
void createlist(int a)
{
    ContactList= new int[a];
    
    cout<<"Enter "<<a<<" ContactNo\'s in list: \n";
    for(int i = 0; i< a; i++)
    {
        cin>>ContactList[i];
    }
}

//declaring found if removing element then it will be increased by 1
int found = 0;

//adding a data to specific position on array
void add(int a){
    int address;
    int newdata;
    cout<<"\nEnter adress where you want to add another data : ";
    cin>>address;
    cout<<"\nEnter New Data : ";
    cin>>newdata;
    ContactList[address] = newdata;

}

//showing all elements
void showall(int a){
    for (int i = 0; i < a; i++)
    {
     cout<<"\nUsername["<<i<<"] = "<<ContactList[i];
    }
}

//removing elements from list
void remove(int a){
    int ind;
    cout<<"\nEnter index from which you want to remove element: ";
    cin>>ind;
    for (int i = 0; i < a; i++)
    {
        if(ContactList[ind] == ContactList[i])
        {
            for(int i = ind; i<a; i++)
            	ContactList[i] = ContactList[i+1];
            found++;
            cout<<"\nElement at index "<<ind<<" is removed and othere elements are shifted on left!";
        }
    }
    if(found == 0)
    cout<<"\nElement at given index not found!";
    else
    showall(a);
}

//showing specific data from list
void showone(int n){
    cout<<"\nContactNo at provided index is : "<<ContactList[n];
}

//finding data from list
void find(int a){
    int f;
    cout<<"\nEnter data to find element : ";
    cin>>f;
    for(int i = 0; i < a; i ++){
    	if(ContactList[i] == f)
    		{cout<<"\nData is present at index : "<<i;break;}
    		if(i>a){cout<<"\nData not found";}
			}
}

//deleting an element from list
void del(int a){
    for (int i = 0; i < a; i++)
		--ContactList;
}

int main(){
    int a,n,run =1;
    char choice;
    cout<<"\nHello and Welcome to this Program! First of all Lets create a new list \n\nEnter the number of elements you want to declare:";
        cin>>a;
        createlist(a);
	while(run)
    {
        system("CLS");
		cout<<"\n\n1. To Add Elements in the List Enter A\n2. To Remove an element from List Enter R\n3. To Show Whole List Enter Z\n4. To Show Specific Element from List  Enter X\n5. To Find an element in the List Enter f\n6. To Delete All List Element Enter D\n\nEnter your choice: ";
        cin>>choice;
        if(choice =='A' ||choice =='a')
        {
            add(a);    
        }
        else if(choice =='R' ||choice =='r')
        {
            remove(a);  
        }
        else if(choice =='Z' ||choice =='z')
        {
            showall(a);
        }
        else if(choice =='X' ||choice =='x')
        {
            cout<<"\nEnter Index number to view its Data : ";
            cin>>n;
            showone(n);
        }else if(choice =='F' ||choice =='f')
        {
            find(a);
        }
        else if(choice =='D' ||choice =='d')
        {
        	del(a);    
        }
        else
        cout<<"\nWrong Choice!";
        cout<<"\n\nDo you want an other iteration? (1 for Yes and 0 for No) ";
        cin>>run;
    }
    
    return 0;
}
