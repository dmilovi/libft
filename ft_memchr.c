/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilovid <dmilovid@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:51:33 by dmilovid          #+#    #+#             */
/*   Updated: 2024/03/10 14:57:49 by dmilovid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
//#include <stddef.h>
//#include <stdlib.h>

//scan memory for a character
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	uc;

	str = (unsigned char *) s;
	uc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(int argc, char **argv)
{
	char	c;
	char	*s;
	int		n;

	s = argv[1];
	c = argv[2][0];
	n = atoi(argv[3]);
	printf("%p\n\n", ft_memchr(s, c, n));
	printf("%p\n\n", memchr(s, c, n));
}*/
