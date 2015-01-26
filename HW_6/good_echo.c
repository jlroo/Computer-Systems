/* 
 * COMP_264
 * HW_6.1
 * JOSE LUIS RODRIGUEZ
 * FALL_2014
 *  
 *
 * movl 12(%ebp), %eax
 * movl 36(%eax), %edx
 * addl 12(%eax), %edx
 * movl 8(%ebp), %eax
 * movl %edx, 92(%eax)
 * 
 * What are the values of A and B? Explain how you obtain the result. 
 * (The solutions is unique.) 
 *
 * A=5 , B=9
 *
 *    B		  4	    2B	        4	    AB		  4
 * [ ARRAY ]   [  t   ]	[   s	]   [   u   ]	[   x   ]     [   y   ]    
 * ^	       ^	^	    ^		^	      ^
 * |	       |	|	    |		|     	      |
 * %eax=q      q+B	q+B+4	    q+3B+4	%eax=P	      P+2AB
 *
 * we are considering an array of A x elements , each element comprising an 
 * array B elements and each element needs to be aligned, 
 * B arrays require 16 bytes, so the 16-byte aligned.
 */

/* 
 * COMP_264
 * HW_6.2
 * JOSE LUIS RODRIGUEZ
 * FALL_2014
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#define BUFSIZE 64

char *gets(char *c) {
    int i;
    char *dest = c;
    while ((i = getchar()) != '\n' && i != EOF) 
        *dest++ = i;
    *dest++ = '\0'; 
    if (i == EOF)
        return NULL;
    return c;  
}

void echo() {
    char buf[4]; 
    gets(buf);
    puts(buf);
}

void good_echo() {
    char buf[BUFSIZE];
    int i;
    while (1) {
        if (!fgets(buf, BUFSIZE, stdin))
            return; 
        for (i = 0; buf[i] && buf[i] != '\n'; i++)
            if (putchar(buf[i]) == EOF)
                return; 
        if (buf[i] == '\n') {
            putchar('\n');
            return;
        }
    }
}

int main(int i, char *arr_v[]) {
  int good_ok = (i > 1);
  printf("Enter text:");
  if (good_ok)
    good_echo();
  else
    echo();
  return 0;
}