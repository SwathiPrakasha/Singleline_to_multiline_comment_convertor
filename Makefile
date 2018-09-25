
#Makefile variable
CC = g++
CCFLAGS = -c -Wall


#Makefile Rules
assign4:assign4.o process.o
	$(CC) -o assign4 assign4.o process.o 

assign4.o:assign4.cc assign4.h
	$(CC) $(CCFLAGS) assign4.cc

process.o:process.cc process.h
	$(CC) $(CCFLAGS) process.cc

#Psuedo-clean command, which removes all the object files and particular executable file.
clean:
	-rm *.o assign4 
