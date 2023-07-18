#include <stdio.h>
#define MAXLINE 50
/* Convert Case */
char line[MAXLINE];

//void getLine(void);

void minus(void);

int main(){

	minus();
}
void minus(void)// input a line and output it in Lowercase 
{
	int c;
	while((c = getchar()) != EOF && c != '\n')
	{
		if(c >= 'A' && c <= 'Z')
			putchar(c + 'a' - 'A');
		else if(c >= 'a' && c <= 'z')
			putchar(c);
		else{
			printf("\n\t[Erro, Character Invalid]\n");
			break;
		}
	}
	printf("\n");
}

/*void getLine(void){ // get line into a string

	int c,i;
	extern char line[];
	i = 0;
	while((c = getchar()) != EOF && c != '\n'){
		line[i++] = c;
	}

	if(c == '\n'){
		line[i++] = c;
	}

	line[i] = '\0';
}*/
