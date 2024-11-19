//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double owed = 0.0;
	double paid = 0.0;

	cout<<"Amt. owed:";
	cin>>owed;
	cout<<owed<<endl;
	
	cout<<"Amt. paid:";
	cin>>paid;
	cout<<paid<<endl;

	if(owed>paid)
	cout<<"Not enough money"<<endl;
	else
		double change = paid-owed;
	
	cout<<"Total change "<<fixed<<setprecision(2)<<change<<endl;
	int ch = ceil(change*100);

	cout<<"Dollars "<<ch/100<<endl;
	ch = .1;

	cout<<"Quarters "<<ch/25<<endl;
	ch = .025;

	cout<<"Dimes "<<ch/10<<endl;
	ch = .01;

	cout<<"Nickels "<<ch/5<<endl;
	ch = .005;

	cout<<"Penny "<<ch<<endl;
	ch = .001
		
	return 0;
}	//end of main function