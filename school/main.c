/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:47:43 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/15 20:17:41 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <string.h>
int	main(void)
{
	printf("%s\n", "isalpha");
	printf("real:%d my:%d\n", isalpha('1'), ft_isalpha('1'));
	printf("real:%d my:%d\n", isalpha('w'), ft_isalpha('w'));
	printf("real:%d my:%d\n", isalpha('Z'), ft_isalpha('Z'));
	printf("real:%d my:%d\n", isalpha('\n'), ft_isalpha('\n'));
	printf("%s\n", "isdigit");
	printf("real:%d my:%d\n", isdigit('1'), ft_isdigit('1'));
	printf("real:%d my:%d\n", isdigit('0'), ft_isdigit('0'));
	printf("real:%d my:%d\n", isdigit('w'), ft_isdigit('w'));
	printf("real:%d my:%d\n", isdigit('Z'), ft_isdigit('Z'));
	printf("real:%d my:%d\n", isdigit('\n'), ft_isdigit('\n'));
	printf("%s\n", "isalnum");
	printf("real:%d my:%d\n", isalnum('1'), ft_isalnum('1'));
	printf("real:%d my:%d\n", isalnum('0'), ft_isalnum('0'));
	printf("real:%d my:%d\n", isalnum('w'), ft_isalnum('w'));
	printf("real:%d my:%d\n", isalnum('Z'), ft_isalnum('Z'));
	printf("real:%d my:%d\n", isalnum('\n'), ft_isalnum('\n'));	
	printf("%s\n", "isascii");
	printf("real:%d my:%d\n", isascii('\0'), ft_isascii('\0'));
	printf("real:%d my:%d\n", isascii('0'), ft_isascii('0'));
	printf("real:%d my:%d\n", isascii('w'), ft_isascii('w'));
	printf("v: %c real:%d my:%d\n", L'€', isascii(L'€'), ft_isascii(128));
	printf("v: %c real:%d my:%d\n", 127 ,isascii(127), ft_isascii(127));
	printf("%s\n", "isprint");
	printf("real:%d my:%d\n", isprint('\0'), ft_isprint('\0'));
	printf("real:%d my:%d\n", isprint('0'), ft_isprint('0'));
	printf("real:%d my:%d\n", isprint('w'), ft_isprint('w'));
	printf("v: %c real:%d my:%d\n", 127 ,isprint(127), ft_isprint(127));	
	printf("%s\n", "strlen");
	printf("real %zu my %zu source %s\n", strlen("hi42kay"), ft_strlen("hi42kay"),
		"hi42kay");	
	printf("%s\n", "memset");
	char arr[] = "hi42kay";
	ft_memset(arr, 56, 7);
	printf("%s\n", arr);
	printf("%s\n", "bzero");
	char arr1[] = "hi42kay";
	for(int i = 0; i < (int) sizeof(arr1); i++)
		printf("%d ", arr1[i]);
	printf("\nft_bzero \n");
	ft_bzero(arr1, sizeof(arr1));
	for(int i = 0; i < (int) sizeof(arr1); i++)
		printf("%d ", arr1[i]);
	printf("\nbzero \n");
	bzero(arr1, sizeof(arr1));
	for(int i = 0; i < (int) sizeof(arr1); i++)
		printf("%d ", arr1[i]);
	printf("\n-----------------\n");
	printf("memcpy\n");
	char arr2[] = "hi42kay";
	char arr3[8];
	arr3[8] = 0;
	ft_memcpy(arr3, arr2, sizeof(arr2));
	printf("%s\n", arr3);
	printf("-----------------\n");
	printf("memmove\n");
	char arr4[] = "ABCDE";
	printf("arr4 :%s:\n", arr4);
	printf("command ft_memmove(&arr4[2], arr4, 3)\n");
	ft_memmove(&arr4[2], arr4, 3);
	printf("%s\n", arr4);
	printf("-----------------\n");
	printf("strlcpy\n");
	char	arr5[2];
	printf("my %zu\n", ft_strlcpy(arr5, arr4, 2));
	printf("%s\n", arr5);
	printf("real %zu\n", strlcpy(arr5, arr4, 2));
	printf("%s\n", arr5);
	printf("-----------------\n");
	printf("strlcat\n");
	char	arr6[5] = "hi";
	char	arr7[5] = "hi";
	printf("my %zu\n", ft_strlcat(arr6, arr4, 5));
	printf("%s\n", arr6);
	printf("real %zu\n", strlcat(arr7, arr4, 5));
	printf("%s\n", arr7);


}
