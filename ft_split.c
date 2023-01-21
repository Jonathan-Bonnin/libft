/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbonnin <jbonnin@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:14:15 by jbonnin           #+#    #+#             */
/*   Updated: 2023/01/21 18:22:22 by jbonnin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_word_count(const char *str, char separator);
int	get_word_len(const char *str, char separator);

char	**ft_split(const char *str, char c)
{
	int		i;
	int		j;
	int		k;
	int		word_count;
	char	**split_strs;

	word_count = get_word_count(str, c);
	split_strs = malloc(sizeof(char *) * word_count + 1);
	if (!split_strs)
		return (NULL);
	i = 0;
	j = 0;
	while (i < word_count)
	{
		while (str[j] && str[j] == c)
			j++;
		if (str[j])
			split_strs[i] = malloc(get_word_len(&str[j], c) + 1);
		k = 0;
		while (str[j] && str[j] != c)
			split_strs[i][k++] = str[j++];
		i++;
	}
	split_strs[i] = 0;
	return (split_strs);
}

int	get_word_count(const char *str, char separator)
{
	int	i;
	int	word_count;

	word_count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == separator)
			i++;
		if (str[i])
			word_count++;
		while (str[i] && str[i] != separator)
			i++;
	}
	return (word_count);
}

int	get_word_len(const char *str, char separator)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != separator)
		len++;
	return (len);
}
