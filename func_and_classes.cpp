

#include <iostream>
#include <string>
#include "calculator.h"
#include <math.h>
using namespace std;
float a,b;
	// Function to take input
	// from user
	void Calculator::result() 
	{
		cout << "Enter First Number: "; 
		cin >> a;
		cout << "Enter Second Number: "; 
		cin >> b;
	}

	// Function to add two numbers
	float Calculator::add() 
	{
		return a + b;
	}

	// Function to subtract two numbers
	float Calculator::sub() 
	{
		return a - b;
	}

	// Function to multiply two numbers
	float Calculator::mul() 
	{
		return a * b;
	}

	// Function to divide two numbers
	float Calculator::div() 
	{
		if (b == 0) 
		{
			cout << "Division By Zero" << 
					endl;
			return INFINITY;
		}
		else
		{
			return a / b;
		}
	}