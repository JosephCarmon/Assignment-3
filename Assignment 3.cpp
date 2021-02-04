/*
 * Assignment 3.cpp
 *
 *  Created on: Feb 3, 2021
 *      Author: Joe
 */

#include <iostream>
#include <TypeInfo>
#include <vector>
#include <fstream>
#include "readfile.h"

using namespace std;

double CalculateRadius(int);
double CalculateRadius(double);

vector<int> ivNumbers;


int main()
{


	int iInput=0;
	auto aInput=3.14;

	Readfile File1;
    Readfile File2("file1.txt")

	cout << "This date is type :" << typeid(aInput).name();

    double dRetVal1 = CalculateRadius(iInput);
    double dRetVal2 = CalculateRadius(aInput);

    for(int iIndex=0; iIndex < 5; iIndex++)
    {

    	ivNumbers.push_back(iIndex);

    }

    for(int iIndex=0; iIndex < 5; iIndex++)
    {

    	cout << endl << "Position in vector :"<< ivNumbers[iIndex];

    }


    for(int iIndex=0; iIndex < 5; iIndex++)
    {

    	cout << endl << "Position in vector :"<< ivNumbers[iIndex];

    }

	return 0;
}


double CalculateRadius(int iInput)
{

	cout <<  endl << "In Integer function";

	return '3.14';

}

double CalculateRadius(double dInput)
{

	cout << endl << "In Double function";

	return '3.15';

}
