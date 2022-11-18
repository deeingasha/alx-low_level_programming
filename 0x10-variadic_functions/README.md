# 0x10. C - Variadic functions  
---  
Variadic functions accept a variable number of arguments but **MUST have at least one argument.**  
`stdarg.h` is the library that allows working with variadic functions  
It defines `va_list` an object type and 4 macros to manipulate it: -  
1. `va_start` enables access to variadic function arguments
```
void va_start(va_list ap, last);
```
2. `va_arg` access the next variadic function argument
```
type va_arg(va_list ap, type);
```
3. `va_end` ends transversal of variadic function arguments
```
void va_end(va_list ap);
```
4. `va_copy` makes a copy of the variadic function arguments
```
void va_copy(va_list dest, va_list src);
```
