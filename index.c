#include <stdio.h>

#define MAXLINE 50
enum {NO = 0,YES = 1};
/* Convert Case */

char line[MAXLINE];

void hexu(void);
void minus(void);
void getLine(void);
int comp(char[]);

int main(){
	minus();
}
void hexu(void){

	getLine();

	extern char line[];

	int hexdigit,i,inhex,n;
	n = i = 0 ;
	inhex = YES;

	while (inhex == YES)
	{
		if (line[i] >= '0' && line[i] <= '9')
		{
			hexdigit = line[i] - '0';
		}
		else if (line[i] >= 'a' && line[i] <= 'z')
		{
			hexdigit = line[i] - 'a' + 10;
		}
		else if (line[i] >= 'A' && line[i] <= 'Z')
		{
			hexdigit = line[i] - 'A' + 10;
		}
		else
		{
			inhex = NO;
		}

		if (inhex == YES)
			n = 16 * n + hexdigit ;
		++i;
	}

//	printf("%d\n",n);
}



void minus(void)// input a line and output it in Lowercase 
{
	/*int c;
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
	printf("\n");*/

	getLine();

	extern char line[];
	int i = 0;
	while(i < (comp(line)))
	{
		if ( line[i]>='A' && line[i]<='Z' )
			putchar(line[i] + 'a' - 'A');
		else if ( line[i]>='a' && line[i]<='z' )
			putchar(line[i]);
		else if (line[i] == '\t' || line[i] == ' '){
			putchar(line[i]);
		}
		else {
			printf("\n\t[Erro,Character Invalid]\n");
			break;
		}
		++i;
	}
	printf("\n");
	//printf("\n%d\n",comp(line));
}

void getLine(void){ // get line into a string
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
}

int comp(char s[]){// return string length
	int i = 0;
	while(s[i] != '\0' && s[i] != '\n')
		i++;
	return i;
}
