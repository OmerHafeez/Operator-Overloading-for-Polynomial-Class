#ifndef POLYNOMIAL_H_
#define POLYNOMIAL_H_


//addition substaction ulti ho rahi hai
#include<iostream>
using namespace std;
class Polynomial 
{
private:
    int degree;             // Degree of the polynomial
    int* coefficients;     // Array of coefficients

public:
    // Default constructor
    Polynomial(); 
    // Parametrized constructor with degree
    Polynomial(int deg) ;
    
    // Copy constructor
    Polynomial(const Polynomial& new_poly);

	// Overloaded = operator
    Polynomial& operator=(const Polynomial& new_poly);
    // Overloaded equality operator
    bool operator==(const Polynomial& new_poly) ;
	// Overloading + operator
	Polynomial operator+(const Polynomial& new_poly) ;

	
	// Overloading - operator
	Polynomial operator-(const Polynomial& new_poly) ;
	
	// Overloading += operator
	void operator+=(const Polynomial& new_poly);
		// Overloading += operator
	void operator-=(const Polynomial& new_poly) ;
	
	// Overloaded << operator
    friend ostream& operator<<(ostream& os, const Polynomial& poly);
    // Overloaded >> operator
    friend istream& operator>>(istream& is, Polynomial& poly);
	
	
	//print function
	void print();
	
    // Destructor
    ~Polynomial() ;  

};


#endif /* POLYNOMIAL_H_ */
