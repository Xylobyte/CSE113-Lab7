#ifndef str_h
#define str_h

int str_len(char *s);
void str_cat(char s[], char t[]);
void squeeze(char s[], int c);
void reverse(char s[]);
void pstr_ncpy(char *dest, char *src, int n);
void pstr_cat(char *s, char *t);
#endif