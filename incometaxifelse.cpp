//Write a program that calculates income tax based on the following slab using nested if else
#include <iostream>
using namespace std;
 int main() {
 double income,tax=0;
 cout<<"enter your annual income : $";
 cin>>income;
 if (income<=250000) {
 	tax=0;
 } else if (income > 250000 && income <=500000) {
 	tax = (income - 250000) * 0.05; 
	 } else if (income > 500000 && income <=1000000) {
	 tax = (250000 * 0.05) + ((income - 500000)*0.20); 	
	 } else {
	 	tax=(250000*0.05)+(500000*0.02) + ((income-1000000)*0.03);
	 }
	 cout<<"the income tax amount is $"<<tax<<endl;
	 return 0;
 }
 
   
