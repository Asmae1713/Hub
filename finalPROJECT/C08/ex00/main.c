#include <stdio.h>
#include "ft.h"

int main() {
	    
	    ft_putchar('H');
	        ft_putchar('\n');

		    
		    int x = 5, y = 10;
		        ft_swap(&x, &y);
			    printf("x: %d, y: %d\n", x, y);

			        
			        ft_putstr("Hello, World!\n");

				    
				    char str[] = "Hello";
				        int length = ft_strlen(str);
					    printf("Length of '%s': %d\n", str, length);

					        
					        char s1[] = "apple";
						    char s2[] = "apricot";
						        int cmp_result = ft_strcmp(s1, s2);
							    printf("Comparison result: %d\n", cmp_result); 

							        return 0;
}
