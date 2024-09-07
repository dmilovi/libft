/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                           :+:      :+:    :+:*/
/*                                                    +:+ +:+         +:+     */
/*   By: dmilovid <dmilovid@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:48:03 by dmilovid          #+#    #+#             */
/*   Updated: 2024/03/09 17:02:44 by dmilovid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

//copy memory area
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	if (NULL == src && NULL == dst)
		return (NULL);
	tmp_dst = (unsigned char *) dst;
	tmp_src = (unsigned char *) src;
	while (n > 0)
	{
		*(tmp_dst++) = *(tmp_src++);
		n--;
	}
	return (dst);
}
/*
int	main(void)
{
	char	v[] = "42424242";
	char	v1[] = "Warsaw";

	printf("%s ->%p\n", v,  ft_memcpy(v, v1, 3));

	printf("%s ->%p\n", v,  memcpy(v, v1, 3));
}*/
