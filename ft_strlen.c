/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilovid <dmilovid@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:30:19 by dmilovid          #+#    #+#             */
/*   Updated: 2024/03/03 15:49:46 by dmilovid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

//calculate the length of a string
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char *s = "Warsaw42";
	char *s1 = "";

	printf("Len of %s = %zu\n", s, ft_strlen(s));
	printf("Len of %s = %zu", s1, ft_strlen(s1));

}*/
