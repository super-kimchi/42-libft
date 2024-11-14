/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 01:59:21 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/15 02:32:39 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	c;

	c = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[c] && size > 1)
	{
		dest[c] = src[c];
		c++;
		size--;
	}
	dest[c] = '\0';
	return (ft_strlen(src));
}
/*
#include <stdio.h>

int main(void)
{
    char    arr[] = "hi42kay";
    char    arr1[7];
    char    arr2[7];
    printf("%zu\n", strlcpy(arr1, arr, 0));
    printf("%s\n", arr1);
    printf("%zu\n", ft_strlcpy(arr2, arr, 0));
    printf("%s\n", arr2);
}
*/
