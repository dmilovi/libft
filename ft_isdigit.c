/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilovid <dmilovid@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 14:45:49 by dmilovid          #+#    #+#             */
/*   Updated: 2024/03/03 14:50:55 by dmilovid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

//checks for a digit (0 through 9)
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (c);
	return (0);
}
/*
int main(void)
{
	for (int i = 0; i < 127; ++i)
	{
		if (ft_isdigit(i))
			printf("Char is %c a digit\n", i);
	}
	
	for (int i = 0; i < 127; ++i)
	{
		if (isdigit(i))
			printf("Char is %c a digit\n", i);
	}
}*/
