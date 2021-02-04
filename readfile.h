/*
 * readfile.h
 *
 *  Created on: Feb 3, 2021
 *      Author: Joe
 */
#include <string>
#include <fstream>
#include <iostream>

#ifndef READFILE_H_
#define READFILE_H_

using namespace std;

class Readfile
{

	//Private members are available only to member function for that class
private:



//Public functions are available to the calling programmer
// This is what you give to programmers to use your class
public:



//Function declaration section
    Readfile()
    {

    	    string sLine;
    		ifstream MyFile;
    		ifstream MyFile2;

    		MyFile.open("file.txt");

    		if(MyFile.is_open())
    		{
    			while (getline (MyFile, sLine))
    			{

    				cout << sLine << endl;

    			}

    			MyFile.close();

    		}


    }

    Readfile(string sFileToOpen)
    {

    	    string sLine;
    		ifstream MyFile;
    		ifstream MyFile2;

    		MyFile.open(sFileToOpen);

    		if(MyFile.is_open())
    		{
    			while (getline (MyFile, sLine))
    			{

    				cout << sLine << endl;

    			}

    			MyFile.close();

    		}


    }


};



#endif /* READFILE_H_ */
