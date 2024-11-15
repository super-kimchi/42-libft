/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:20:06 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/13 22:08:53 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*start;
	unsigned char	*start_src;

	start = (unsigned char *)dest + n - 1;
	start_src = (unsigned char *)src + n - 1;
	while (n > 0)
	{
		*start = *start_src;
		start--;
		start_src--;
		n--;
	}
	return (dest);
}
/*
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
}
*/
