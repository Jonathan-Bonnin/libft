/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbonnin <jbonnin@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:43:22 by jbonnin           #+#    #+#             */
/*   Updated: 2023/01/15 19:38:16 by jbonnin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, int n)
{
	int			i;
	char		*c_dest;
	const char	*c_src;

	if (dest < src)
		return (ft_memcpy(dest, src, n));
	c_dest = dest;
	c_src = src;
	i = n - 1;
	while (i >= 0)
	{
		c_dest[i] = c_src[i];
		i--;
	}
	return (dest);
}
