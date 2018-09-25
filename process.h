

/*
   This is header file for the process_data.cc file.
   this file consists of all the headers and using declarations required for the process.cc program
   the header consists enumaration type declaration needed in the process.cc
*/

#ifndef PRO_H
#define PRO_H

#include<string>
#include<iostream>
#include<fstream>

using std::endl;
using std::string;
using std::ofstream;

/*this is enumeration type declaration which is used in the process_data(),
 this declarations are for the states in the state machine */
typedef enum
          {
            STATE_1 =0,
            STATE_2,
            STATE_3
           }my_state_t;
          my_state_t state = STATE_1;


#endif    // ending PRO_H
