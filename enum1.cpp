#include<iostream>
using namespace std;

int main()
{
	enum marvellous_batches { ppa = 0, lb = 1, lsp = 2, python = 3};
	int fees[] = { 15000, 16000,17000, 18000};
	float duration [] = { 3.5, 4.0, 3.5, 5, 5.4};
	int choice = 0;
	
	cout<<" select the batch that you want to join \n";
	cin>>choice;
	
	switch(choice)
	{
		case ppa:
			cout<<"thank you for selecting pre - placement activity batch\n";
			cout<<" duration is : "<< duration(ppa)<<"\n";
			cout<<"fees are :"<<fees[ppa]<<"\n";
			break;
			
		case lb:
			cout<<"thank you for selecting pre - placement activity batch\n";
			break;
			
		case lsp:
			cout<<"thank you for selecting pre - placement activity batch\n";
			break;
			
		case python:
			cout<<"thank you for selecting pre - placement activity batch\n";
			break;
			
			
		
		
		
	}
	return 0;
}