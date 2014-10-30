#include <stdio.h>

/*

movl 8(%ebp), 	%esi	//x into %esi
movl 12(%ebp), 	%ebx	//n into %ebx
movl $-1,	%edi	//result=-1
movl $1, 	%edx	//mask=1
.L2:
movl 	%edx, 	%eax	//%eax=mask
andl 	%esi, 	%eax	//x&mask
xorl 	%eax, 	%edi	//result^(mask&x)
movl 	%ebx, 	%ecx	//%ecx=n
sall 	%cl, 	%edx	//mask<<n
testl 	%edx, 	%edx	//test mask
jne .L2			//if mask not equal to zero, continue else stop.
movl 	%edi, 	%eax	//result-%edi

*/
	int loop(int x, int n) {
		int result= -1;
		int mask;
		for (mask =1; mask !=0; mask = mask<<n) {
			result ^= (mask & x);
		}
		return result;
	}

/*
A. Which registers hold program values x, n, result, and mask?
   
    | Variable|	     | Register |
    |	x     |	---> |	%esi	|
    |	n     |	---> |	%ebx	|
    |	result|	---> |	%edi	|
    |	mask  |	---> |	%edx	|

B. What are the initial values of result and mask?
   
   The initial value for result is -1 and the initial value for mask is 1

C. What is the test condition for mask? (5pts.)
   
   The condition that test mask is mask not equal to zero(mask not zero).

D. How does mask get updated? (5pts.)
   
   The mask value is holds by the register %edx, therefore mask get updated every time
   %edx is shifted to the left by n bits in line 10, test the instruction in line 11
   only changes the flags and does not change the register value.

E. How does result get updated?

   The result is updated Bitwise applied on mask and x and the result XORed with
   result.
*/
