#include <stdio.h>
#include "cmathparser.h"

int main(){
	
	char* exp;

	printf("Enter a Mathematical Expression >> ");
	scanf("%s", exp);

	printf("Answer: %f\n", evaluate(exp));

	return 0;

}
