#include "ft.h"
#include <unistd.h>

void ft_putchar(char c) {
	    write(1, &c, 1);
}

void ft_swap(int *a, int *b) {
	    int temp = *a;
	        *a = *b;
		    *b = temp;
}

void ft_putstr(char *str) {
	    while (*str) {
		            write(1, str, 1);
			            str++;
				        }
}

int ft_strlen(char *str) {
	    int length = 0;
	        while (*str) {
			        length++;
				        str++;
					    }
		    return length;
}

int ft_strcmp(char *s1, char *s2) {
	    while (*s1 && (*s1 == *s2)) {
		            s1++;
			            s2++;
				        }
	        return *(unsigned char *)s1 - *(unsigned char *)s2;
}
