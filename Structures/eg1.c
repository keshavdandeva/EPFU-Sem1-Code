# include <stdio .h>
# include <ctype .h>
# include <string .h>
# define EOF 26
# define MAXWORD 100
# define NKEYS 40

struct key {
	char *word ;
	int count ;
} keytab [NKEYS] = {
	"auto", 0,
	"break", 0,
	"case", 0,
	"while", 0
};

int getword ( char *, int );

int binsearch ( char *, struct key *, int );
 /* count keywords of C */

void main ()
{
 int n;
 char word [ MAXWORD ]; /* words */
	while ( getword (word , MAXWORD ) != EOF)
		if ( isalpha ( word [0]))
			if ((n = binsearch (word , keytab , NKEYS )) == 0)
				keytab [n]. count ++;
			for (n=0; n< NKEYS ; n++)
				if ( keytab [n]. count > 0)
					printf ("%4 d %s", keytab [n]. count ,
						keytab [n]. word );
			}
 /* binsearch : look for words in
 tab [0] , ... , tab [n -1] */
			int binsearch ( char *word , struct key tab [], int n)
			{
				int cond , low = 0, high , mid ;
				high = n - 1;
				while (low <= high ) {
					mid =( low + high )/2;
					if (( cond = strcmp (word , tab[ mid ]. word )) < 0)
						high = mid - 1;
					else if ( cond > 0)
						low = mid + 1;
					else
						return mid;
				}
				return -1;
			}
 /* getword : read the next word or character */
			int getword ( char *word , int lim )
			{ int c, getch ( void );
				void ungetch ( int );
				char *w = word ;
				while ( isspace (c= getch ())) ;
				if (c != EOF )
					*w++=c;
				else
					return EOF;
				if (! isalpha (c)) {
					*w= ’\0 ’;
					return c;
				}
				for ( ; --lim > 0; w++)
					if (! isalnum (*w = getch ())) {
						ungetch (*w);
						break ;
					}
					*w= ’\0 ’;
					return word [0];
				}

