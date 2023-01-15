/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbonnin <jbonnin@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:01:39 by jbonnin           #+#    #+#             */
/*   Updated: 2023/01/15 19:22:31 by jbonnin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	length_src;
	unsigned int	length_dest;

	length_src = ft_strlen(src);
	length_dest = ft_strlen(dest);
	if (size <= length_dest)
		return (size + length_src);
	i = length_dest;
	j = 0;
	while (src[j] && j < (size - length_dest - 1))
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (length_src + length_dest);
}
