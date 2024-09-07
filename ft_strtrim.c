/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilovid <dmilovid@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 10:28:33 by dmilovid          #+#    #+#             */
/*   Updated: 2024/03/16 10:28:43 by dmilovid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

//trims the beginning and end of string with specific set of chars
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;

	if (!s1)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size = ft_strlen(s1);
	while (size && ft_strchr(set, s1[size]))
		size--;
	return (ft_substr(s1, 0, size + 1));
}
/*
int main(void) 
{
	printf("%s\n", ft_strtrim("  ", " "));
}
*/
