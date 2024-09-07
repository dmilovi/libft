/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilovid <dmilovid@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:57:53 by dmilovid          #+#    #+#             */
/*   Updated: 2024/03/09 19:07:38 by dmilovid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

//locate character in string
char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}
/*
int	main(void)
{
	char	*s = "Warsaw";

	printf("%p\n", strchr(s, 'a'));
	printf("my function: %p\n\n", ft_strchr(s, 'a'));

	printf("%p\n", strchr(s, 'w'));
	printf("%p\n\n", ft_strchr(s, 'w'));

	printf("%p\n", strchr(s, 's'));
	printf("%p\n\n", ft_strchr(s, 's'));

	printf("%p\n", strchr(s, '\0'));
	printf("%p\n\n", ft_strchr(s, '\0'));

	char	*s1 = "";
	printf("%p\n", strchr(s1, '\0'));
	printf("%p\n\n", ft_strchr(s1, '\0'));
}*/
