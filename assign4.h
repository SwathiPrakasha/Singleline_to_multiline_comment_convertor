
/*

   This is a program that take a file with line-style comments and turn them into block-style comments.
   
   This is header file for the assign4.cc program.
   this file consists of all the headers and using declarations required for the assign4.cc program
   this file also consists a 'process_data' function declarations. 
*/

#ifndef GEN_H
#define GEN_H


#include<iostream>
#include<fstream>
#include<string>
#include <cstdlib>

using std::endl;
using std::ofstream;
using std::string;
using std::cerr;
using std::ifstream;
                    
#define SUCCESS 0;                               // success iteration
#define FAIL 2;                                  // file not opening code 

/* This is function is used to process the data passed from main based on the requirement
   the function takes an output stream, string(data to be processed), int &,int & which are the flag used in the function. 
   the function does comparision character by character and process it. Finally passses it to the output stream. 
 */

void process_data(ofstream &, string,int &, int &);


#endif          //ending the GEN_H//
