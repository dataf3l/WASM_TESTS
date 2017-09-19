#include <stdio.h>

void doit(){
	printf("oh fuck\n");
}
int main(int argc, char ** argv) {
	int d = 0;
	printf("Give me data:");
	scanf("%d", &d);

	for(int i=0;i<d;i++){
		doit();
		//printf("Hello World\n");
	}
}
