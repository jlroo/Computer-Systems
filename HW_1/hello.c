/************************************************************
Hello.c Program
By: Jose L Rodriguez
Date: September 10th
Loyola University - COMP 264
Fall 2014
*************compiling and execution process******************

  Input                  Program        Output
source code          > Preprocessor > expanded source code
expanded source code > Compiler     > assembly source code
assembly code        > Assembler    > object code
object code          > Linker       > executable code
executable code      > Loader       > execution

**************************************************************/

#include <stdio.h> 

main(){ //Main function

printf("Hello World.!"); //Print Hello World in the terminal

}

/*********************************

-----Compiling process-------

gcc -E hello.c -o hello.i

gcc -S hello.i -o hello.s

gcc -c hello.s -o hello.o

gcc hello.o -o hello

**********************************/
