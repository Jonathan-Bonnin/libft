/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbonnin <jbonnin@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 20:06:46 by jbonnin           #+#    #+#             */
/*   Updated: 2023/01/17 20:40:12 by jbonnin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*big_c;
	char	*little_c;

	big_c = (char *) big;
	little_c = (char *) little;
	i = 0;
	if (!little_c[i])
		return (big_c);
	while (big_c[i] && i < len)
	{
		j = 0;
		while (big_c[i + j] && big_c[i + j] == little_c[j])
			j++;
		if (!little_c[j] && i + j < len)
			return (&big_c[i]);
		i++;
	}
	return (0);
}
