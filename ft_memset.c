/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilovid <dmilovid@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:57:41 by dmilovid          #+#    #+#             */
/*   Updated: 2024/03/03 16:05:13 by dmilovid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

//fill memory with a constant byte
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *) b;
	while (len > 0)
	{
		*(tmp_ptr++) = (unsigned char) c;
		len--;
	}
	return (b);
}
/*
int	main(void)
{
	char	v[10];

	ft_memset(v, 42, 5);

	for (int i = 0; i < 10; ++i)
		printf("%d\n", v[i]);
	printf("ft_memset-> %p\n\n", ft_memset(v, 42, 5));



	memset(v, 21, 5);

	for (int i = 0; i < 10; ++i)
		printf("%d\n", v[i]);
	printf("Real memset-> %p\n", memset(v, 21, 5));
}*/
