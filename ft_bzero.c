/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilovid <dmilovid@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 16:12:56 by dmilovid          #+#    #+#             */
/*   Updated: 2024/03/03 16:18:29 by dmilovid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

//zero a byte string, works like memset but with 0, save len bytes to string
void	ft_bzero(void *s, size_t n)
{
	char	*tmp_ptr;

	tmp_ptr = (char *) s;
	while (n > 0)
	{
		*(tmp_ptr++) = 0;
		n--;
	}
}
/*
int	main(void)
{
	int		v[20];

	for (int i = 0; i < 20; ++i)
		v[i] = 42;

	for (int i = 0; i < 20; ++i)
		printf("%d\n", v[i]);
	puts("");

	ft_bzero(v, 9);

	for (int i = 0; i < 20; ++i)
		printf("%d\n", v[i]);
}*/
