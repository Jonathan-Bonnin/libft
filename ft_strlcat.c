/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbonnin <jbonnin@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:01:39 by jbonnin           #+#    #+#             */
/*   Updated: 2023/01/09 16:02:12 by jbonnin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copy / paste from C03/05 and I was wrong

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	length_src;
	unsigned int	length_dest;

	length_src = 0;
	while (src[length_src])
		length_src++;
	length_dest = 0;
	while (dest[length_dest])
		length_dest++;
	if (size <= length_dest)
		return (size + length_src);
	i = length_dest;
	j = 0;
	while (src[j] && j < size - length_dest - 1)
		dest[i++] = src[j++];
	if (!src[j]) 
		dest[i] = '\0';
	return (length_src + length_dest);
}