#include "4.h"
#include<iostream>
using namespace std;


int main() 
{
    Polynomial p1(4); // Default constructor
    Polynomial p2(3); // Parametrized constructor with degree 3
	cout<<"P1 is:"<<endl;
	p1.print();
	cout<<"P2 is:"<<endl;
	p2.print();

    // Copy constructor
    Polynomial p3 = p1;

    // Addition
    Polynomial p4 = p1 + p2;
	cout<<"p4 = p1 + p2"<<endl;
	p4.print();
    // Subtraction
    Polynomial p5 = p1 - p2;
	cout<<"p5 = p1 - p2"<<endl;
	p5.print();
    // Comparison
    if(p1 == p2)
	cout<<"p1 and p2 are equal"<<endl;
	else
	cout<<"p1 and p2 are not equal"<<endl;
    // Compound assignment +=
    cout<<"p+=p2"<<endl;
    p1 += p2;
	
    // Compound assignment -=
    cout<<"p-=p2"<<endl;
    p1 -= p2;

	cout << endl;
	cout << "Insertion: \n";
	Polynomial p9;
	cin >> p9;	

	cout << "Excertion: \n";
	cout << p9;
	
	cout << endl;
	
    return 0;
}
