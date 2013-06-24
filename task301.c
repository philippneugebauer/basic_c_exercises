#include <stdio.h>

char *lessthan = "less than";
char *equalto = "equal to";
char *greaterthan = "greater than";

char* message(int i) {
	if (i<0) 
		return lessthan;
	else if (i==0) 
		return equalto;
	else
		return greaterthan;
}

int strcmp(char *s, char *t) {
	for (; *s == *t; s++, t++ )
		if (*s == '\0')
			return 0;
	return *s - *t;
}

int atoi(char *s) {
	int i;
	i = *s;
	for(
	if(i > 47 && i < 58)

	else
		printf("Sie müssen eine Zahl zwischen 0 und 9 eingeben!");
		break;
}

int main(void) {
	char *str1 = "aaaa";
	char *str2 = "aaab";
	char *str3 = "aaac";
	printf("\"%s\" is %s \"%s\"\n",str1,message(strcmp(str1,str2)),str2);
	printf("\"%s\" is %s \"%s\"\n",str1,message(strcmp(str1,str1)),str1);
	printf("\"%s\" is %s \"%s\"\n",str3,message(strcmp(str3,str2)),str2);
	atoi(str1);
}
