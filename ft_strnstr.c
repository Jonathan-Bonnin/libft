/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbonnin <jbonnin@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 20:06:46 by jbonnin           #+#    #+#             */
/*   Updated: 2023/01/15 16:42:45 by jbonnin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char	*ft_strnstr(const char *big, const char *little, int len)
{
	int		i;
	int		j;

	i = 0;
	if (!little[i])
		return (big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && big[i + j] == little[j])
			j++;
		if (!little[j] && i + j < len)
			return (&big[i]);
		i++;
	}
	return (0);
}
