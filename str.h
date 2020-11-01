#ifndef str_h
#define str_h

int str_len(char *s);
void str_cat(char s[], char t[]);
void squeeze(char s[], int c);
void reverse(char s[]);
void pstr_ncpy(char *dest, char *src, int n);
void pstr_cat(char *s, char *t);
int pstr_ncmp(char *s, char *t, int n);
char *pindex(char *s, int c);
void psqueeze(char *s, int c);
void cswap(char *c, char *d);
void preverse(char *s);
#endif