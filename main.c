#include <stdio.h>
#include <string.h>

#define ALLOWANCE 300
#define CONVERSION 0.8

#define MAXLINE 20

int getln(char line[], int limit);

int main(void)
{
	float budget = 0.0;
	char input[100];
	int f;
	while (1){
		putchar('>');
		f = getln(input, MAXLINE);
		printf("%s", input);
		if (f)
			break;
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
