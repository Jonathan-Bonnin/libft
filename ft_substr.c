/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbonnin <jbonnin@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 19:45:49 by jbonnin           #+#    #+#             */
/*   Updated: 2023/01/17 19:34:44 by jbonnin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;
	int		s_len;

	if (!s)
		return (0);
	res = malloc(len + 1);
	s_len = ft_strlen(s);
	if (!res || start >= (unsigned int) s_len)
		return (0);
	i = 0;
	while ((int) start < s_len && i < (int) len)
		res[i++] = s[start++];
	res[i] = 0;
	return (res);

}
