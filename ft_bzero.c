/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbonnin <jbonnin@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:31:36 by jbonnin           #+#    #+#             */
/*   Updated: 2023/01/14 19:07:49 by jbonnin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	bzero(void *s, size_t n)
{
	int		i;
	char	*res;

	i = 0;
	res = (char *) s;
	while (i < n)
	{
		res[i] = 0;
		i++;
	}
}
