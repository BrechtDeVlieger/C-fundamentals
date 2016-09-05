#include <stdio.h>

int main(int argc, char *argv[]){
	for(int i = 1; i < argc, i ++){
		printf("%s: %d\n", argv[1], strlen(argv[1]));
	}
	return 0;
}
