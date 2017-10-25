#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>

int main(int argc, char*argv[]){
	int index = 0;
	for (int j = 1; j < argc; j++){
		if(strncmp(argv[1],"-n",-1)==0 && j==1){
			index = 1;
		}else{
			printf("%s ",argv[j]);
		}
		
	}
	if(index == 0){
		printf("\n");
	}

	return 0;
}
