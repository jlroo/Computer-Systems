#include <stdio.h>
/* HW_2 COMP 264
 * Author: Jose L Rodriguez
 * FALL2014
 * Program: Test for Endian Machine (Big and Little)
 */
int main() {

   unsigned int i = 1;
   char *c = (char*)&i;
   if (*c)   
       printf("1");
   else
       printf("0");
   getchar();
   return 0;
}
/*
 * If we  point a char type variable "c"  to an unsigned  integer i. 
 * The  size of character is 1 byte when the char pointer is  de-referenced contain 
 * only first byte of integer. For this case if the machine is LITTLE ENDIAN c* will
 * be 1 as the last byte is store first, otherwise the machine is BIG ENDIAN.
 *
 *                 ___BIG ENDIAN___
 * 
 *	        0x100  0x101  0x102  0x103
 *	*----* *----* *----* *----* *----* *----*
 *	|    | | 01 | | 23 | | 45 | | 67 | |    |
 *	*----* *----* *----* *----* *----* *----*
 *
 *	          ___LITTLE ENDIAN___
 *
 *	       0x100  0x101  0x102  0x103
 *	 *--*   *--*   *--*   *--*   *--*   *--*
 *	 |  |   |67|   |45|   |23|   |01|   |  |
 *	 *--*   *--*   *--*   *--*   *--*   *--*
 *
 */
