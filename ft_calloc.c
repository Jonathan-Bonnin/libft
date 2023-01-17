/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbonnin <jbonnin@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:56:21 by jbonnin           #+#    #+#             */
/*   Updated: 2023/01/17 20:00:21 by jbonnin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*dest;

	total_size = nmemb * size;
	dest = malloc(total_size);
	if (!dest)
		return (0);
	ft_memset(dest, 0, total_size);
	return (dest);
}
