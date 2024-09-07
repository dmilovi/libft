/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilovid <dmilovid@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:34:05 by dmilovid          #+#    #+#             */
/*   Updated: 2024/03/10 14:44:21 by dmilovid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
//#include <stddef.h>
//#include <stdlib.h>

//compare two string
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
/*
int	main (int argc, char **argv)
{
	char	*s;
	char 	*s1;
	int		n;

	s = argv[2];
	s1 = argv[1];
	n = atoi(argv[3]);
	
	if (ft_strncmp(s, s1, n))
		printf("The strings are not equal\n");
	else 
		 printf("The strings are equal\n");
	if (ft_strncmp(s, s1, n))
		printf("The strings are not equal\n");
	else 
		 printf("The strings are equal\n");
}*/
