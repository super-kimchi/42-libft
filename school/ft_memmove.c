/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:20:06 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/16 06:59:43 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*start;
	unsigned char	*start_src;
	int	c;

	if (dest == NULL && src == NULL)
		return (dest);
	if (dest - src > 0)
	{
		start = (unsigned char *)dest + n - 1;
		start_src = (unsigned char *)src + n - 1;
	}
	else
	{
		start = (unsigned char *)dest;
		start_src = (unsigned char *)src;
	}
	while (n > 0)
	{
		start[c] = start_src[c];
		if (dest - src > 0)
			c--;
		else
			c++;
		n--;
	}
	return (dest);
}

#include <string.h>

int	main(void)
{
	char arr[] = "ABCDE";
	char arr1[] = "ABCDE";
	memmove(&arr[2], arr, 3);
	ft_memmove(&arr1[2], arr1, 3);
	printf("real %s\n", arr);
	printf("my %s\n", arr1);
	char dest[] = "EFGH";
	memmove(dest, arr, 4);
	printf("real %s\n", dest);
	ft_memmove(dest, arr, 4);
	printf("my %s\n", dest);

	char dst1[0xF0];
    char dst2[0xF0];
    char *data="zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    int size = 0xF0 - 0xF;
 
    memset(dst1, 'A', sizeof(dst1));
    memset(dst2, 'A', sizeof(dst2));
    memcpy(dst1, data, strlen(data));
    memcpy(dst2, data, strlen(data));
	printf("%s\n", dst1);
	printf("%s\n", dst1);
	printf("%d\n", size);
    memmove(dst1, dst1 + 3, size);
    ft_memmove(dst2, dst2 + 3, size);
	printf("%s\n", dst1);
	printf("%s\n", dst1);

}

