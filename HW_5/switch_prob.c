/* 
 * COMP_264
 * HW_5
 * JOSE LUIS RODRIGUEZ
 * FALL_2014
 *  
 */

int switch_prob(int x, int n){
	
	int result=x;
	
	switch(n){
		case50:
		case52:	
			result <<=2;
			break;

		case53:
			result >>=2;
			break;
		case54:
			result *=3;
		case55:
			result *=result;
		default:
			result +=10;
	}
}

/*
switch_prob.o:     file format elf64-x86-64
Disassembly of section .text:
0000000000000000 <switch_prob>:

int switch_prob(int x, int n){
   0:   55                      push   %rbp
   1:   48 89 e5                mov    %rsp,%rbp
   4:   89 7d ec                mov    %edi,-0x14(%rbp)
   7:   89 75 e8                mov    %esi,-0x18(%rbp)

        int result=x;
   a:   8b 45 ec                mov    -0x14(%rbp),%eax
   d:   89 45 fc                mov    %eax,-0x4(%rbp)
                case54:
                        result *=3;
                case55:
                        result *=result;
                default:
                        result +=10;
  10:   83 45 fc 0a             addl   $0xa,-0x4(%rbp)
        }
}
  14:   5d                      pop    %rbp
  15:   c3                      retq
*/
