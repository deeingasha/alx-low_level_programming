# 0x09. C - Static libraries  
Making our own static library made of copies of existing C library functions.  
Functions in libmy.a are:  
```
int _putchar(char c);  
int _islower(int c);  
int _isalpha(int c);  
int _abs(int n);  
int _isupper(int c);  
int _isdigit(int c);  
int _strlen(char *s);  
void _puts(char *s);  
char *_strcpy(char *dest, char *src);  
int _atoi(char *s);  
char *_strcat(char *dest, char *src);  
char *_strncat(char *dest, char *src, int n);  
char *_strncpy(char *dest, char *src, int n);  
int _strcmp(char *s1, char *s2);  
char *_memset(char *s, char b, unsigned int n);  
char *_memcpy(char *dest, char *src, unsigned int n);  
char *_strchr(char *s, char c);  
unsigned int _strspn(char *s, char *accept);  
char *_strpbrk(char *s, char *accept);  
char *_strstr(char *haystack, char *needle);  
```
The basic steps are:  
1. Create the function files  
2. Compile them without linking i.e get object files  use `gcc -c`  
3. Create the library as an archive using `ar`  
4. Index the library using `ranlib`  
