/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilovid <dmilovid@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:27:14 by dmilovid          #+#    #+#             */
/*   Updated: 2024/03/16 11:27:20 by dmilovid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//output a string to a file descriptor
void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}
