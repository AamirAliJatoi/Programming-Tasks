#include<iostream>
#include<string>//for geting multiple sting values(getline)
#include<stdlib.h>//for using clear screen function system("CLS")
using namespace std;

//function to calculate price of percentage
double getpercentage(double per,double tot)
{
	return (tot/100)*per;
}

int main()
{
	string moviename;
	double priceofct,priceofadt,percdonation,donation,amountd;
	int notsadult;//no of tickets sold(adult)
	int notschild;//no of tickets sold(child)
	
	//getting data over here
	cout<<"Enter Movie Name: ";
	getline(cin,moviename);
	cout<<"Enter Price of an adult ticket: ";
	cin>>priceofadt;
	cout<<"Enter Price of an child ticket: ";
	cin>>priceofct;
	cout<<"Enter number of adult tickets sold: ";
	cin>>notsadult;
	cout<<"Enter number of child tickets sold: ";
	cin>>notschild;
	cout<<"Enter the percentage of donation: ";
	cin>>donation;
	
	//performing calculations
	double tpriceadult = notsadult*priceofadt;//childsticket total price calculated
	double tpricechild = notschild*priceofct;//adultsticket total price calculated
	double ga = tpriceadult+tpricechild;//gross amount
	amountd = ga/100*donation;//calculating amount donated

	system("CLS");//clearing screen before displaying the output
	
	//Displaying output here
	cout<<"Movie Name:             ------------"<<moviename<<endl;
	cout<<"Number of Tickets Sold: ------------"<<notsadult+notschild<<endl;
	cout<<"Gross Amount:           ------------$"<<ga<<endl;
	cout<<"Percentage of Gross Amount Donated: "<<donation<<"%"<<endl;
	cout<<"Amount Donated:         ------------$"<<amountd<<endl;
	cout<<"Net Sale:               ------------$"<<ga-amountd<<endl;
}

