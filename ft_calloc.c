/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbonnin <jbonnin@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 20:30:31 by jbonnin           #+#    #+#             */
/*   Updated: 2023/01/14 19:06:11 by jbonnin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*calloc(unsigned int nmemb, unsigned int size)
{
	int		i;
	void	*res;

	if (nmemb == 0 || size == 0)
		return (0);
	i = 0;
	while (i < nmemb)
	{
		res[i] = malloc(size);
	}
}
