#include<iostream>
using namespace std;
int main()
{
	int n,prev,count=2,current;
	cout<<"enter n: ";
	cin>>n;
	cout<<"enter the first no: ";
	cin>>prev;
	bool isDecreasing=true;
	while(count<=n)
	{
	   cin>>current;
	   if(current==prev)
	   {
	   	 //isDecreasing=false;
	   	 cout<<"false";
	   	 return 0;
		}	
	   else  if(current<prev)
	   {
	   	if(isDecreasing==false)
	   	{
	   	//	isDecreasing=true;
	   		cout<<"false";
	   		return 0;
		   }
	   }
	   else
	   {
	    	if(isDecreasing==true)
	    	{
	   			 isDecreasing=false;
		    }
	   }
	   count++;
	   prev=current;
	}
	
	cout<<"true";
}

