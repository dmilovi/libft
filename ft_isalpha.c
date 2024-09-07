/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilovid <dmilovid@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 14:21:12 by dmilovid          #+#    #+#             */
/*   Updated: 2024/03/03 14:35:03 by dmilovid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

//checks for an alphabetic character
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (c);
	return (0);
}
/*
int	main(void)
{
	for(int i = 0; i <= 127; ++i)
		if (ft_isalpha(i))
			printf("Char %c is alpha\n", i);
}*/
