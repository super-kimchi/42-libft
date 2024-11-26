/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 03:59:47 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/27 04:10:44 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		l;
	int		i;

	l = ft_strlen(s);
	str = (char *)malloc(l + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
char	test(unsigned int i, char c)
{
	return (c + i);
}

int	main(void)
{
	printf("%s", ft_strmapi("123", test));
}
*/
