/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbonnin <jbonnin@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:31:34 by jbonnin           #+#    #+#             */
/*   Updated: 2023/01/09 15:41:43 by jbonnin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>;
void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*res;

	i = 0;
	res = (char *) s;
	while (i < n)
	{
		res[i] = c;
		i++;
	}
	return (res);
}
