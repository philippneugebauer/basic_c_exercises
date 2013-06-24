#include <stdio.h>

int main(int argc, char **argv){

	FILE *inputFile = fopen(argv[1], "r");
	FILE *outputFile = fopen(argv[2], "w");

	if(argc == 2){
		if(inputFile != NULL && outputFile != NULL){
			char buffer[1000];
			while(fgets(buffer, 100, inputFile) != NULL){
				fputs(buffer, outputFile);
			}
		fclose(inputFile);
		fclose(outputFile);
		}
	}else{
		printf("%s\n", "Argc must be equal to 2");
	}
}

