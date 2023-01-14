/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbonnin <jbonnin@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:43:22 by jbonnin           #+#    #+#             */
/*   Updated: 2023/01/14 19:07:58 by jbonnin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*c_dest;
	char	*c_src;

	c_dest = (char *) dest;
	c_src = (char *) src;
	i = 0;
	while (c_src[i] && i < n)
	{
		c_dest[i] = c_src[i];
		i++;
	}
	return (dest);
}
