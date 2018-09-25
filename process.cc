
/* This file consists of process_data() function,is to process the data passed from main based on the requirement.
   The function takes an output stream, string(data to be processed), int &,int & which are the flag used in the function.
   the function does comparision character by character and process it. Finally passses it to the output stream.
 */  
  
#include"process.h"                               // header file required for the process_data()

    void process_data(ofstream & outFile, string data, int &flag, int &strFlag)
     {
      
        //Variable declarations
        unsigned int i=0, j=1, commFlag=0;


        // A while loop to read the complete data passed character by character
        while(i<data.length())
        {

            if (commFlag == 0 )
                   
                switch(state)                             //state is intially 1, then it keep changing based on data read
                 {
                     case STATE_1 : if((data[i]=='/') && (data[j] == '/'))            // when the  '//' occurs 
                                     {
                                        data[j] = '*';                                
                                        data = data + " */";
                                        state = STATE_1;
                                        commFlag = 1;               
                                        break;
                                      } 

                     // quotes validation
                     case STATE_2 : if((data[i] == '"') && (strFlag == 0) )              // when the opening '"' occurs
                                    { 
                                        strFlag = 1;          
                                        state = STATE_2;             
                                    } 

                                    else if((strFlag ==1) && (data[i] == '"'))           // when the closing '"' occurs
                                    { 
                                        strFlag = 0; 
                                        state = STATE_1; 
                                         
                                     }

                                    else if((strFlag == 1) && (data[i]=='\\') && (data[j] == '\"')) // when the escaped quotes occur
                                     { 
                                        i++,j++;                                       // we have to just ignore the escape char
                                        state = STATE_2;
                                     }

                                    else if(strFlag == 1)                              // keep repeating till closing'"' occurs     
                                     {
                                        state = STATE_2; 
                                        break; 
                                      }


                   //  block comments validation
                   case STATE_3 :  if((flag == 0) && (data[i] == '/') && (data[j] == '*'))        // when '/*'  occurs
                                     { 
                                        flag = 1; 
                                        state = STATE_3;  
                                     }

                                   else if((flag == 1) && (data[i] == '*') && (data[j]=='/'))     // when '*/' occurs
                                    { 
                                        flag = 0; 
                                        state = STATE_1; 
                                        i++;j++;
                                     
                                    }

                                   else if(flag ==1)                         // continues to be in STATE_3, if there was no '*/' 
                                       state = STATE_3;
 
                   
                     default: break;

               } //end of switch

            i++, j++;

        } //end of while

           outFile<<data<<endl;
    }

