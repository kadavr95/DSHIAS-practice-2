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
	int B, C, D;
	memory[100]=5;
	memory[101]=25;
	memory[102]=22;
	memory[103]=9;
	memory[104]=20;
	memory[105]=19;

	MOV(&C, memory[100]);
	ADD (&D, 100, memory[100]);
	MOV (&B, memory[D]);

	while (1)
	{
		DEC(&D);
		DEC(&C);
		if (CMP(memory[D], B)>0) MOV(&B, memory[D]);
		if (CMP(C, 0)==0) break;
	}
	printf("MAX is %d\n", B);

	fflush(stdin);
	getchar();
	return 0;
}
