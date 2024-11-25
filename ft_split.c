/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:51:38 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/25 20:21:29 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*seperator(char const *s, int sep)
{
	char	*str;
	int		c;
	int		i;

	c = 0;
	while (s[c] != sep)
		c++;
	if (c == 0)
		c = strlen(s);
	str = (char *)malloc(c + 1);
	i = 0;
	while (i < c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

char **ft_split(char const *s, char c)
{
	char	**arr;
	int	sep_c;
	int	i;
	int	arr_c;
	
	sep_c = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			sep_c++;
		i++;
	}
	if (strlen(s) == 0)
		sep_c = 0;
	arr = (char **)malloc(sep_c + 1);
	if (!arr)
		return (NULL);
	i = 0;
	arr_c = 0;
	while (arr_c < sep_c)
	{	
		arr[arr_c] = seperator(s, c);
		s = s + strlen(arr[arr_c]) + 1;
		arr_c++;
	}
	arr[arr_c] = 0;
	return (arr);
}
/*
int	main(void)
{
	char	**test = ft_split("hi 42 kay", ' ');
	char	**test1 = ft_split("", ' ');

	for (int i = 0; i < 4; i++)
		printf(":%s: ", test[i]);
	printf("\n");
	for (int i = 0; i < 1; i++)
		printf(":%s: ", test1[i]);
}
*/
