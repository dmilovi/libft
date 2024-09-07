/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilovid <dmilovid@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:21:57 by dmilovid          #+#    #+#             */
/*   Updated: 2024/03/03 15:27:57 by dmilovid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

//checks for any printable character
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	return (0);
}
/*
int main(void)
{
	for (int i = 0; i < 130; ++i)
	{
		if (ft_isprint(i))
			printf("My function %c\n", i);
		if (isprint(i))
			printf("Real function %c\n", i);
	}
}*/
