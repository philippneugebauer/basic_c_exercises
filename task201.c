#include <stdio.h>

char lowercase(char c){
	int i = 'a';
	int j = 'A';
	int k = j - i;
	int l = c - k;
	return (char) l;
}

int main(void) {
	int i,j,k;
	j = 0;
	k = 100;
	char *strText;
	for(i = 0; i <= 10; i++){
		strText = (j <= k) ? ("less than or equal to k") : ("greater than k");
		//printf("j is currently %s (i:%d, j:%d, k:%d)\n",strText,i,j,k);
		j+=10;
		k-=10;		
	}

	printf("%d\n", 'a');
	printf("%d\n", 'b');

	printf("%d\n", 'A');
	printf("%d\n", 'B');

	printf(lowercase('A'));
	
}

