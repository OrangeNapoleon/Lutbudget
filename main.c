#include <stdio.h>
#include <string.h>

#define ALLOWANCE 300.0
#define CONVERSION 0.8

#define MAXLINE 20

int getln(char line[], int limit);

int parse(char command[]);

/*int compute(char operand[], char option, float value);*/		

float budget = 0.0;

int main(void)
{
	char input[100];
	int f;
	while (1){
		putchar('>');
		f = getln(input, MAXLINE);
		if (f)
			break;
		int a;
		a = parse(input);
		/*TODO: ADD FILE SAVING*/
	}
	return 0;
}

int getln(char s[], int lim)
{
	int c, i;
	
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n'){
		s[i] = c;
		++i;
		s[i] = '\0';
		return 0;
	}else{
		strcpy(s, "EXIT\n");
		return 1;
	}
}

int parse(char s[])
{
	char cmnd[10];

	int i;

	for (i=0;s[i] != ' ' && s[i] != '\n';++i)
		cmnd[i] = s[i];

	if (strcmp(cmnd, "ALLOWANCE") == 0){
		budget = budget + 300;
	}else if (strcmp(cmnd, "PRINT") == 0){
		printf("your budget: %f\n", budget);
	}


	return i;
}
