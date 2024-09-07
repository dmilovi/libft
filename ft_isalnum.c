/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilovid <dmilovid@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 14:58:49 by dmilovid          #+#    #+#             */
/*   Updated: 2024/03/03 15:02:54 by dmilovid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

//checks for an alphanumeric character
int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (c);
	return (0);
}
/*
int main(void)
{
	for (int i = 0; i < 127; ++i)
	{
		if (ft_isalnum(i))
			printf("%c is alnum\n", i);
	}
}*/
