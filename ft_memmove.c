/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbonnin <jbonnin@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:43:22 by jbonnin           #+#    #+#             */
/*   Updated: 2023/01/09 15:55:35 by jbonnin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*c_dest;
	char	*c_src;
	char	*temp;

	c_dest = (char *) dest;
	c_src = (char *) src;

	i = 0;
	while (c_src[i] && i < n)
	{
		temp[i] = c_src[i];
		i++;
	}
	i = 0;
	while (temp[i] && i < n)
	{
		c_dest[i] = temp[i];
		i++;
	}
	return (dest);
}