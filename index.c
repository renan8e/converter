#include <stdio.h>

#define MAXLINE 50
enum {NO = 0,YES = 1};
char line[MAXLINE];

void hexu(void);
void getLine(void);
int comp(char[]);

int main()
{
	hexu();
}

void hexu(void){
	getLine();
	extern char line[];

	int hexdigit,i,inhex,n=0;
	inhex = YES;

	for(i = 0;inhex == YES;++i){
		if (line[i] >= '0' && line[i] <= '9'){
			hexdigit = line[i] - '0';
		}
		else if (line[i] >= 'a' && line[i] <= 'z'){
			hexdigit = line[i] - 'a' + 10;
		}
		else if (line[i] >= 'A' && line[i] <= 'Z'){
			hexdigit = line[i] - 'A' + 10;
		}
		else if (line[i] == ' ' || line[i] == '\t' || line[i] == '\n'){
			if(n != 0)
				printf("%d ", n);
			hexdigit = n = 0;
		}
		else{
			inhex = NO;
		}

		if (inhex == YES)
			n = 16 * n + hexdigit ;
	}
	printf("\n");
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
