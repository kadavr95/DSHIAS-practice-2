/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void MOV(int *V, int A){
   *V = A;
}

void DEC(int *V){
	*V=*V-1;
}

void INC(int *V){
	*V=*V+1;
}

void ADD(int *R, int A, int B){
	*R=A+B;
}

int CMP(int A, int B){
	if (A>B)
		return 1;
	else
		if (A==B)
			return 0;
		else
			return -1;
}

int main(void)
{
	int memory[1000];
	int B, C, D, PC=1;
	memory[100]=5;
	memory[101]=25;
	memory[102]=22;
	memory[103]=9;
	memory[104]=20;
	memory[105]=19;

    while (PC!=9){
	    switch(PC) {
	        case 1:
	            MOV(&C, memory[100]);
	            PC=PC+1;
	            break;
	        case 2:
	            ADD (&D, 100, memory[100]);
	            PC=PC+1;
	            break;
	        case 3:
	            MOV (&B, memory[D]);
	            PC=PC+1;
	            break;
	        case 4:
	            DEC(&D);
	            PC=PC+1;
	            break;
	        case 5:
	            DEC(&C);
	            PC=PC+1;
	            break;
	        case 6:
	            if (CMP(memory[D], B)>0) 
	                PC=PC+1;
	            else
	                PC=8;
	            break;
	        case 7:
	            MOV(&B, memory[D]);
	            PC=PC+1;
	            break;
	        case 8:
	            if (CMP(C, 0)==0)
	                PC=9;
	            else
	                PC=4;
	            break;
	        case 9:
	            break;
	        default: 
	            break;
	    }
    }
	printf("MAX is %d\n", B);
	fflush(stdin);
	getchar();
	return 0;
}
