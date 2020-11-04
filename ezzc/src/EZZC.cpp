#include <stdio.h>
#include "method.h"

int main(){

	int a = 0,
	    b = 1;
	printf("a:%d, b:%d\n",a,b);
	swap<int>(a,b);
	printf("a:%d, b:%d\n",a,b);
	return 0;
}
