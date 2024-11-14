/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:20:32 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/14 22:20:32 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t dstsize)
{
    int d_c;
    int s_c;
    int c;
    d_c = strlen(dest);
    s_c = strlen(src);
    if (dstsize <= d_c || dstsize == 0)
        return (s_c + dstsize);
    c = 0;
    while (*src && d_c + c < dstsize - 1)
    {
        dest[d_c + c] = *src;
        c++;
        src++;
    }
    dest[d_c + c] = '\0';
    return (d_c + s_c);
}