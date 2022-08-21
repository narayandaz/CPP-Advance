#include <stdio.h>

struct Structure_Tag{
	int Num1;
	int Num2;
};

struct UDT{
	int Num1;
	int Num2;
};

UDT st1;

int main(){
	st1.Num1 = 10;
	st1.Num2 = 20;
	printf("st1.Num1 == %d.\nst1.Num2 == %d.\n",st1.Num1,st1.Num2);
	UDT *ptr;
	ptr = &st1;
	printf("ptr->Num1 == %d.\n(*ptr).Num2 == %d\n",(*ptr).Num1,ptr->Num2);
	
	return 0;
}
