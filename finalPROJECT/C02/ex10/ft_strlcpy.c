unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	    unsigned int src_len;
	        unsigned int i;

		    src_len = 0;
		        while (src[src_len])
				        src_len++;

			    if (size != 0)
			    {
				 

			        i = 0;
				    while (i < size - 1 && src[i])
					        {
							        dest[i] = src[i];
								        i++;
									    }

				        if (size > 0)
						        dest[i] = '\0';

					    return src_len;
}

