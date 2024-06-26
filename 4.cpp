#include "4.h"
#include<iostream>
using namespace std;


// Default constructor
    Polynomial :: Polynomial() 
    {
        degree = 0;
        coefficients = new int[1];
        coefficients[0] = 0;
    } 
    
    // Parametrized constructor with degree
    Polynomial :: Polynomial(int deg) 
    {
        degree = deg;
        int ini=1;
        coefficients = new int[degree + 1];
        for (int i = 0; i <= degree; i++) {
            coefficients[i] = ini;
            ini++;
        }
    }

    
    // Copy constructor
    Polynomial ::  Polynomial(const Polynomial& new_poly) 
    {
        degree = new_poly.degree;
        coefficients = new int[degree + 1];
        for (int i = 0; i <= degree; i++) {
            coefficients[i] = new_poly.coefficients[i];
        }
    }

	// Overloaded = operator
    Polynomial& Polynomial ::  operator=(const Polynomial& new_poly) {
    	int maxDegree;
        // Determine the maximum degree between the two polynomials
		if(degree > new_poly.degree)
		maxDegree=degree;
		else
		maxDegree=new_poly.degree;
        // Create a new Polynomial object to store the result
        Polynomial* result = new Polynomial(maxDegree);

        // Subtract the coefficients term by term
        for (int i = 0; i <= degree; i++) {
            result->coefficients[i] = coefficients[i];
        }
        for (int i = 0; i <= new_poly.degree; i++) {
            result->coefficients[i] -= new_poly.coefficients[i];
        }

        // Return the result
        return *result;
    }
    
    
    // Overloaded equality operator
    bool Polynomial ::  operator==(const Polynomial& new_poly) {
        // If degrees are not equal, polynomials are not equal
        if (degree != new_poly.degree) {
            return false;
        }
        // Compare coefficients term by term
        for (int i = 0; i <= degree; i++) {
            if (coefficients[i] != new_poly.coefficients[i]) {
                return false;
            }
        }
        // If all coefficients are equal, polynomials are equal
        return true;
    }
    
    
	// Overloading + operator
	Polynomial Polynomial ::  operator+(const Polynomial& new_poly) {
    	// Determine the maximum degree between the two polynomials
    	int maxDegree;
    	if (degree > new_poly.degree) {
        	maxDegree = degree;
    	} else
		 {
        	maxDegree = new_poly.degree;
   		}

    	// Create a new Polynomial object to store the result
    	Polynomial result(maxDegree);


	int check=0;

    	// Add the coefficients term by term
    	for (int i = 0; i <= degree; i++) {
        	result.coefficients[i] = coefficients[i];
    	}
    	
    	if(degree==new_poly.degree)
	{
    	for (int i = 0; i <= new_poly.degree; i++) {
        	result.coefficients[i] += new_poly.coefficients[i];
    	}
    	
    	}
    	
    	
    	if(degree>new_poly.degree)
    	{
	    	check=degree-new_poly.degree;
	    	for (int i = new_poly.degree; i >= 0; i--) {
	        	result.coefficients[i+check] += new_poly.coefficients[i];
	    	}
	}
	
	
	if(degree<new_poly.degree)
    	{
	    	check=new_poly.degree-degree;
	    	for (int i = new_poly.degree; i >= 0; i--) {
	        	result.coefficients[i+check] += new_poly.coefficients[i];
	    	}
	}
	
	
    	// Return the result
    	return result;
	}

	
	// Overloading - operator
	Polynomial Polynomial ::  operator-(const Polynomial& new_poly) {
    	// Determine the maximum degree between the two polynomials
    	int maxDegree;
    	int check=0;
    	if (degree > new_poly.degree) {
        	maxDegree = degree;
    	} else
		 {
        	maxDegree = new_poly.degree;
   		}

    	// Create a new Polynomial object to store the result
    	Polynomial result(maxDegree);
    	// Add the coefficients term by term
    	for (int i = 0; i <= degree; i++) {
        	result.coefficients[i] = coefficients[i];
    	}
    	
    	
     	if(degree==new_poly.degree)
	{
    	for (int i = 0; i <= new_poly.degree; i++) {
        	result.coefficients[i] -= new_poly.coefficients[i];
    	}
    	
    	}
    	
    	
    	if(degree>new_poly.degree)
    	{
	    	check=degree-new_poly.degree;
	    	for (int i = new_poly.degree; i >= 0; i--) {
	        	result.coefficients[i+check] -= new_poly.coefficients[i];
	    	}
	}
	
	
	if(degree<new_poly.degree)
    	{
	    	check=new_poly.degree-degree;
	    	for (int i = new_poly.degree; i >= 0; i--) {
	        	result.coefficients[i+check] -= new_poly.coefficients[i];
	    	}
	}
    	// Return the result
    	return result;
	}

	
	// Overloading += operator
	void Polynomial ::  operator+=(const Polynomial& new_poly) {
    	// Determine the maximum degree between the two polynomials
    	int maxDegree;
    	int check=0;
    	if (degree > new_poly.degree) {
        	maxDegree = degree;
    	} else
		 {
        	maxDegree = new_poly.degree;
   		}

    	// Create a new Polynomial object to store the result
    	Polynomial result(maxDegree);

    	// Add the coefficients term by term
    	for (int i = 0; i <= degree; i++) {
        	result.coefficients[i] = coefficients[i];
    	}
    	
    	
    	   	if(degree==new_poly.degree)
	{
    	for (int i = 0; i <= new_poly.degree; i++) {
        	result.coefficients[i] += new_poly.coefficients[i];
    	}
    	
    	}
    	
    	
    	if(degree>new_poly.degree)
    	{
	    	check=degree-new_poly.degree;
	    	for (int i = new_poly.degree; i >= 0; i--) {
	        	result.coefficients[i+check] += new_poly.coefficients[i];
	    	}
	}
	
	
	if(degree<new_poly.degree)
    	{
	    	check=new_poly.degree-degree;
	    	for (int i = new_poly.degree; i >= 0; i--) {
	        	result.coefficients[i+check] += new_poly.coefficients[i];
	    	}
	}
	//print the value
	cout << "Result Polynomial Coefficients: "<<endl;
    for (int i = 0; i <= degree; i++) {
        cout << coefficients[i] << " ";
    }
    cout<<endl;
	}
	
	
	// Overloading -= operator
	void Polynomial ::  operator-=(const Polynomial& new_poly) {
    	// Determine the maximum degree between the two polynomials
    	int maxDegree;
    	int check=0;
    	if (degree > new_poly.degree) {
        	maxDegree = degree;
    	} else
		 {
        	maxDegree = new_poly.degree;
   		}

    	// Create a new Polynomial object to store the result
    	Polynomial result(maxDegree);

    	// Add the coefficients term by term
    	for (int i = 0; i <= degree; i++) {
        	result.coefficients[i] = coefficients[i];
    	}


   	if(degree==new_poly.degree)
	{
    	for (int i = 0; i <= new_poly.degree; i++) {
        	result.coefficients[i] -= new_poly.coefficients[i];
    	}
    	
    	}
    	
    	
    	if(degree>new_poly.degree)
    	{
	    	check=degree-new_poly.degree;
	    	for (int i = new_poly.degree; i >= 0; i--) {
	        	result.coefficients[i+check] -= new_poly.coefficients[i];
	    	}
	}
	
	
	if(degree<new_poly.degree)
    	{
	    	check=new_poly.degree-degree;
	    	for (int i = new_poly.degree; i >= 0; i--) {
	        	result.coefficients[i+check] -= new_poly.coefficients[i];
	    	}
	}

	//print the value
	cout << "Result Polynomial Coefficients: "<<endl;
    for (int i = 0; i <= degree; i++) {
        cout << coefficients[i] << " ";
    }
    cout<<endl;
	}
	
	
	
	// Overloaded << operator
    	ostream& operator<<(ostream& os, const Polynomial& poly) 
    	{
        os << "Degree: " << poly.degree << endl;
        os << "Coefficients: ";
        for (int i = 0; i <= poly.degree; i++) 
        {
            os << poly.coefficients[i] << " ";
        }
        os << endl;
        return os;
    }

    // Overloaded >> operator
    istream& operator>>(istream& is, Polynomial& poly) 
    {
        cout << "Enter degree of polynomial: ";
        is >> poly.degree;

        // Allocate memory for coefficients
        poly.coefficients = new int[poly.degree + 1];

        cout << "Enter coefficients of polynomial (from highest degree to lowest): \n";
        for (int i = poly.degree; i >= 0; i--) 
        {
            is >> poly.coefficients[i];
        }
        return is;
    }
	
	
	
	
	//print function
	void Polynomial ::  print()
	{

	// Create a new Polynomial object to store the result
    Polynomial result(degree);
    for (int i = 0; i <= degree; i++) {
        cout << coefficients[i] << " ";
    }
	cout<<endl;	
	}
	
    // Destructor
    Polynomial :: ~Polynomial() {
        delete[] coefficients;
    }
