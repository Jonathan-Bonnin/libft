/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbonnin <jbonnin@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 19:45:49 by jbonnin           #+#    #+#             */
/*   Updated: 2023/01/17 21:30:27 by jbonnin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (0);
	res = malloc(len + 1);
	s_len = ft_strlen(s);
	if (!res)
		return (0);
	i = 0;
	while (start < (unsigned int) s_len && i < len)
		res[i++] = s[start++];
	res[i] = 0;
	return (res);
}
