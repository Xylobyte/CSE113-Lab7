#include "str.h"
#include <stdio.h>

int str_len(char *s)
{
	char *p = s;
	int i;
    for (i = 0; *p != '\0'; p++)
		i++;
    return i;
}

/* array version */
/* concantenate t to the end of s; s must be big enough */
void str_cat(char s[], char t[])
{
	int i, j;

	i = j = 0;
	while (s[i] != '\0') 	/* find end of s */
		i++;
	while ((s[i++] = t[j++]) != '\0') /* copy t */
		;
}

/* array version */
void squeeze(char s[], int c)
{
	int i, j;
	
	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i];

	s[j] = '\0';
}


void reverse(char s[])
{
	int c, i, j;

	for (i = 0, j = str_len(s) - 1; i < j; i++, j-- ) {
		/* change this so it calls cswap */
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	
}

/* copy n chars of src into dest */
void pstr_ncpy(char *dest, char *src, int n)
{
	int i;
	for(i = 0; i <= n; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';
}

/* concantenate t to the end of s; s must be big enough! */
void pstr_cat(char *s, char *t)
{
	int len;
	int j;
	//for(i=0;*(s+i)!='\0';i++);
	len = str_len(s);
	for(j = 0; *(t+j) != '\0'; j++, len++)
		*(s + len) = *(t + j);
	*(s + len) = '\0';
}

char *pindex(char *s, int c)
{
	int i;
	for(i = 0; *(s + i) != '\0'; i++)
		if(*(s + i) == c)
			return (s + i);
	return NULL;
}

void cswap(char *c, char *d)
{
	char temp = *c;
	*c = *d;
	*d = temp;
}

void psqueeze(char *s, int c)
{
	int i = 0;
	int j = 0;
	for (; s[i] != '\0'; i++)
		if (*(s + i) != c)
		{
			*(s + j) = *(s + i);
			j++;
		}
	*(s + j) = '\0';
}

int pstr_ncmp(char *s, char *t, int n)
{
	int i;
	for(i = 0; i < n; i++) {
		if(*(s + i) < *(t + i))
			return -1;
		else if(*(s + i) > *(t + i))
			return 1;
	}
	return 0;
}

void preverse(char *s)
{
	int i = str_len(s) - 1;
	for(int j = 0; j < str_len(s) / 2; j++)
	{
		cswap((s+j),(s+i));
		i--;
	}
}