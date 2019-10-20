#pragma once
#include <iostream>    // FRACTION INPUT OUTPUT
#include <cstdlib>		// FRACTION ERROR

using namespace std;

class fraction		//CLASS DEFINITION
{
private:
	int nume, denom;
public:
	fraction() :nume(0), denom(1)
	{}
	fraction(int n, int d)
	{
		if (d != 0)
		{
			nume = n;
			denom = d;
		}
		else
		{
			cout << endl << "Error : Could not initilize a fraction with 0 denominator";
			cout << endl << "Try initilizing with Non-Zero denominator !";
			exit(1);
		}
	}
	void get_frac()
	{
		bool valid = true;
		while (valid)
		{
			cout << endl << "Enter Numerator : ";
			cin >> nume;
			cout << endl << "Enter Denominator : ";
			cin >> denom;
			valid = check_fraction(denom);
		}
	}
	bool check_fraction(int denom)
	{
		if (denom != 0)
			return false;
		cout << endl << "WARNING ! Denominator Cannot Be Zero\nEnter Again";
		return true;
	}
	void show_frac()
	{
		if (denom != 1)
			cout << endl << nume << "/" << denom;
		else
			cout << endl << nume;
	}
	void simplify();
	fraction operator + (fraction);
	fraction operator - (fraction);
	fraction operator * (fraction);
	fraction operator / (fraction);
};

fraction fraction::operator + (fraction f1)		//DEFINING ADDTION
{
	fraction temp;
	temp.denom = denom * f1.denom;
	temp.nume = ((temp.denom / denom) * nume) + ((temp.denom / f1.denom) * f1.nume);
	return temp;
}

fraction fraction::operator - (fraction f1)		//DEFINING SUBTRACTION 
{
	fraction temp;
	temp.denom = denom * f1.denom;
	temp.nume = ((temp.denom / denom) * nume) - ((temp.denom / f1.denom) * f1.nume);
	return temp;
}

fraction fraction::operator * (fraction f1)		//DEFINING MULTIPLICATION
{
	fraction temp;
	temp.nume = nume * f1.nume;
	temp.denom = denom * f1.denom;
	return temp;
}

fraction fraction::operator / (fraction f1)		//DEFINING DIVISION
{
	fraction temp;
	temp.nume = nume * f1.denom;
	temp.denom = denom * f1.nume;
	return temp;
}
void fraction::simplify()		// DEFINING SIMPLIFICATION OF FRACTION using Eculid's Algorithm
{
	fraction temp;
	temp.nume = nume;
	temp.denom = denom;
	while (temp.nume != temp.denom)
	{
		if (temp.nume > temp.denom)
			temp.nume -= temp.denom;
		else
			temp.denom -= temp.nume;
	}
	nume /= temp.nume;
	denom /= temp.nume;
}