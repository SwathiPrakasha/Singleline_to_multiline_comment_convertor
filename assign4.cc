
/* This is a main program for assignment5, 
   takes two arguments, a input file and output file. The program does check for proper arguments.  
   Once the arguments received the program, checks the files for proper opening, 
   once the files are opened, it reads the input file line by line and passes it to process_data() for processing. 
*/ 



#include "assign4.h"                                     // header file required for this file 


    int main(int argc , char * argv[])
     {
        //variable declrations
        ifstream inFile; 
        ofstream outFile;
        string line; 
        int  flag =0,strFlag=0;

        if(argc < 3)
         { 
            cerr<<"Need input file and output file arguments respectively "<<endl<<"Try again"<<endl;
            exit(1);
         }

        // passing the arguments to variables
        string a4_in = argv[1];
        string a4_out = argv[2];
       

        // Opening the input file
        inFile.open(a4_in.c_str());
        
            // test for proper opening of input file
            if(!inFile.is_open())
             {
              cerr<<"Can't open input file: "<<a4_in<<endl;
              return FAIL;
              }

 
        // Opening the output stream
        outFile.open(a4_out.c_str());

             // test for proper opening of output file 
             if(!outFile.is_open())
              {
                 cerr<<"Can't open output file: "<<a4_out<<endl;
                 return FAIL;
               }


          // a loop to read all the content of the input file passed
          while(!inFile.eof())
           {
              getline(inFile,line);                           // reading line by line by getline() 
 
              process_data(outFile, line, flag, strFlag);     
              /* function call to the process_data(), the function present in the process.cc file
                 the process_data process the data based on the program requirement, 
                 the function take output stream, line data, flag,strflag as parameter and return nothing  
               */
          }

      outFile.close();                                // closing the output file 
      inFile.close();                                 // closing the inout file
     
   return SUCCESS;

 }
