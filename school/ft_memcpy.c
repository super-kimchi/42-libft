/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:38:41 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/13 20:12:15 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*start;
	const unsigned char	*start_src;

	if (dest == NULL || src == NULL)
		return NULL;
	start = dest;
	start_src = src;
	while (n > 0)
	{
		*start = *start_src;
		start++;
		start_src++;
		n--;
	}
	return (dest);
}

#include <string.h>
int	main(void)
{
	int	arr[4] = {11, 11 ,11 ,11};
	memcpy(arr, "\0\0\0 ", 4);
	for (int i = 0; i < (int) (sizeof(arr)/sizeof(int)); i++)
		printf("%d", arr[i]);
	ft_memcpy(arr, " ", 1);
	for (int i = 0; i < (int) (sizeof(arr)/sizeof(int)); i++)
		printf("%d", arr[i]);

	char arr1[] = "hi42kay";
	memcpy(arr1, "  ", 2);
	printf("\n:%s:\n", arr1);
	ft_memcpy(arr1, "AA", 2);
	printf(":%s:\n", arr1);

	printf("%p", memcpy((void *)0, (void *)0, 3));
}

