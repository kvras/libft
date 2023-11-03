#include "libft.h"

char *ft_strlcat(void *dst, const void *src, int  size)
{
	unsigned char *ptr1 = (unsigned char *)dst;
	unsigned char *ptr2 = (unsigned char *)src;
	size_t len_d;
	size_t len_s;
	size_t count;
	len_d = strlen(dst);
	len_s = strlen(src);
	count = sizeof(dst) - len_d;
	if(count <= len_src)
		return len_d + size;
	while(*ptr1)
		ptr++;
	while(i < count)
	{
		ptr1 = ptr2
		ptr++;
		ptr2++;
		i++;
	}
	return len_d + len_s;
}
