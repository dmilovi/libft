/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilovid <dmilovid@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:08:59 by dmilovid          #+#    #+#             */
/*   Updated: 2024/03/03 15:16:00 by dmilovid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

//checks wether c fits into the ASCII character set
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	for (int i = 0; i < 130; ++i)
	{
		if (ft_isascii(i))
			printf("Function %d %c\n", i);
		if (isascii(i))
			printf("Real function %d %c\n", i, i);
	}
}*/
