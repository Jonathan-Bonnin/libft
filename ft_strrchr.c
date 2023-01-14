/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbonnin <jbonnin@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:50:06 by jbonnin           #+#    #+#             */
/*   Updated: 2023/01/14 19:04:19 by jbonnin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	is_c_in_s;

	i = 0;
	is_c_in_s = 0;
	while (s[i])
		i++;
	if (c == 0)
		return (&s[i]);
	if (!is_c_in_s)
		return (0);
	while (i >= 0)
	{
		if (s[i] == c)
			break ;
		i--;
	}
	return (&s[i]);
}
