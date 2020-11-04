#include <stdio.h>
#include "include/method.h"
#include "include/world.h"
#include <iostream>
		
int main(int argc, char* argv[]){
	World w;
	w.a = 0,
	w.b = 1;
	printf("w.a:%d, w.b:%d\n",w.a,w.b);
	swap<int>(w.a,w.b);
	printf("w.a:%d, w.b:%d\n",w.a,w.b);


	return 0;
}
