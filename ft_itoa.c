/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilovid <dmilovid@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:02:01 by dmilovid          #+#    #+#             */
/*   Updated: 2024/03/16 11:02:09 by dmilovid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

//converts a number into a string
static size_t	ft_count(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_returnstr(char *str, int n, size_t len)
{
	str[len] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (len > 0 && n != 0)
	{
		len--;
		str[len] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_count(n);
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	return (ft_returnstr(str, n, len));
}
/*
int main()
{
  char *str = ft_itoa(-2134);
  printf("%s\n", str);

  str = ft_itoa(42);
  printf("%s\n", str);
  str = ft_itoa(707);
  printf("%s\n", str);

  str = ft_itoa(INT32_MIN);
  printf("%s\n", str);

  str = ft_itoa(INT32_MAX);
  printf("%s\n", str);
  
  str = ft_itoa(0);
  printf("%s\n", str);

  return 0;
}*/
