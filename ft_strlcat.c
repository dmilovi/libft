/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilovid <dmilovid@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:59:48 by dmilovid          #+#    #+#             */
/*   Updated: 2024/03/09 18:16:29 by dmilovid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
//#include <stddef.h>

//cocatenate string to an specific size
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize)
		dst_len = dstsize;
	if (dst_len == dstsize)
		return (dstsize + src_len);
	if (src_len < dstsize - dst_len)
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dst_len + src_len);
}
/*
int main()
{
	int		dest_len;
	dest_len = 15;
	char	dest[dest_len];
	int		ret;



	for (int i = 0; i < 15; ++i)dest[i] = 0;
	memset(dest, 'r', 6);
	ret = ft_strlcat(dest, "42 Warsaw 42 Warsaw", 15);
	printf("%s->%d\n", dest, ret);
	for (int i = 0; i < 15; ++i)dest[i] = 0;
	memset(dest, 'r', 6);
	ret = strlcat(dest, "42 Warsaw 42 Warsaw", 15);
	printf("%s->%d\n", dest, ret);
}*/
