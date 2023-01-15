/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbonnin <jbonnin@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:56:21 by jbonnin           #+#    #+#             */
/*   Updated: 2023/01/15 19:03:31 by jbonnin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(int nmemb, int size)
{
	int		total_size;
	void	*dest;

	total_size = nmemb * size;
	dest = malloc(total_size);
	if (!dest)
		return (0);
	ft_memset(dest, 0, total_size);
	return (dest);
}
