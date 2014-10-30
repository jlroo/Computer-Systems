/* 
 * COMP_264
 * HW_3
 * JOSE LUIS RODRIGUEZ
 * FALL_2014  
 */

#include "btest.h"
#include <limits.h>

team_struct team = {
   /* Team name: Replace with either:
i      Your login ID if working as a one person team
      or, ID1+ID2 where ID1 is the login ID of the first team member
      and ID2 is the login ID of the second team member */
    "jrodriguezorjuela", 
   /* Student name 1: Replace with the full name of first team member */
   "Jose Luis Rodriguez Orjuela",
   /* Login ID 1: Replace with the login ID of first team member */
   "jrodriguezorjuela ",
   "No team member", //Had to this to run the btest
   "No team member" 
};

/***********************************************************
 *			FUNCTION BITNOR			   *
 ***********************************************************
 *   bitNor 						   *
 *   ~(x|y) using only ~ and & 				   *
 *   Example: bitNor(0x6, 0x5) = 0xFFFFFFF8		   *
 *   Legal ops: ~ &					   *
 *   Max ops: 8						   *
 *   Rating: 1					   	   *
 ***********************************************************/
int bitNor(int x, int y) {
//~(x|y)
  return (~x&~y);
}

/***********************************************************
 *			FUNCTION BITXOR			   *
 ***********************************************************
 *   bitXor						   *
 *   x^y using only ~ and & 				   *
 *   Example: bitXor(4, 5) = 1				   *
 *   Legal ops: ~ &					   *
 *   Max ops: 14					   *
 *   Rating: 2					   	   *
 ***********************************************************/
int bitXor(int x, int y) {
return (~x & y)|(x & ~y);
//  return (~(~(~x & y) & ~( x & ~y)));
}

/***********************************************************
 *			FUNCTION ISNOTEQUAL		   *
 ***********************************************************
 *   isNotEqual 					   *
 *   return 0 if x == y, 				   *
 *   and 1 otherwise 					   *
 *   Examples: 	isNotEqual(5,5) = 0			   *
 * 		isNotEqual(4,5) = 1			   *
 *   Legal ops: ! ~ & ^ | + << >>			   *
 *   Max ops: 6 					   *
 *   Rating: 2					   	   *
 ***********************************************************/
int isNotEqual(int x, int y) {
  //XOR operation is use to for equality ecaluation
  return (!!(x^y));
}

/***********************************************************
 *			FUNCTION GETBYTE		   *
 ***********************************************************
 *   getByte						   *  
 *   Extract byte n from word x				   *
 *   Examples: getByte(0x12345678,1) = 0x56		   *
 *   Legal ops: ! ~ & ^ | + << >>			   *
 *   Max ops: 6						   *
 *   Rating: 2					   	   *
 ***********************************************************/
int getByte(int x, int n) {
 //n << 3 to represent n in bit form
  return (0xFF&(x>>(n<<3)));
}

/***********************************************************
 *			FUNCTION COPYLSB		   *
 ***********************************************************
 *   copyLSB						   *  
 *   set all bits of result to least significant bit of x  *
 *   Example: 	copyLSB(5) = 0xFFFFFFFF			   * 
 * 		copyLSB(6) = 0x00000000			   *
 *   Legal ops: ! ~ & ^ | + << >>			   *
 *   Max ops: 5						   *
 *   Rating: 2						   *
 ***********************************************************/
int copyLSB(int x) {
// x is shifted to the left 31 bits removing all but the last significant bit
// Then x is shifted back rigth 31 bits to copy the least significant bits
// for all positions.
  return ((x<<31)>>31);
}

/***********************************************************
 *		 	FUNCTION TMAX			   *
 ***********************************************************
 *   TMax						   *  
 *   return maximum two's complement integer		   *
 *   Legal ops: ! ~ & ^ | + << >>			   *
 *   Max ops: 4						   *
 *   Rating: 1						   *
 ***********************************************************/
int tmax(void){
 // Constant representing binary value:1000 0000
 int x = 0x80;
 // If we shift the binary value 1000 0000 24 bits to the
 // left we get the following binary value:
 // 0111 1111 1111 1111 1111 1111 1111 1111
 // Giving us the largest 32-bit two's compliment integer
  return (~(x<<24));
}

/***********************************************************
 *		 FUNCTION ISNOTNEGATIVE			   *
 ***********************************************************
 *   isNonNegative					   *  
 *   return 1 if x >= 0,				   *
 *   return 0 otherwise					   *
 *							   *
 *   Example: isNonNegative(-1) = 0.  isNonNegative(0) = 1.*
 *   Legal ops: ! ~ & ^ | + << >>			   *
 *   Max ops: 6						   *
 *   Rating: 3						   *
 ***********************************************************/
int isNonNegative(int x){
 // To indicate the sign of x we use Boolean data type
 // 1 = Negative
 // 0 = Non_Negative 
int sign_of_x = (x>>31);
  return (!(sign_of_x));
}
