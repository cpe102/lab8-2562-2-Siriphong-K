#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

    double loan,rate,pay,Balance,NewBalance,PrevBalance,tt,Total;
	cout<<"Enter initial loan:";
	cin>>loan;
	cout<<"Enter interest rate per year (%):";
	cin>>rate;
	cout<<"Enter amount you can pay per year:";
	cin>>pay;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	PrevBalance=loan;
for(int i=1;;i++){
	tt=PrevBalance*(rate/100.00);
	Total=PrevBalance+tt;
	if(Total<pay){
	pay=Total;
	}
	NewBalance=Total-pay;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << PrevBalance;
	cout << setw(13) << left << tt;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << pay;
	cout << setw(13) << left << NewBalance;
	cout << "\n";
	PrevBalance=NewBalance;	
    if(NewBalance==0){break;}
}
	
	return 0;
}
