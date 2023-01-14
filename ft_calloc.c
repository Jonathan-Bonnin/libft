/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbonnin <jbonnin@42student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 20:30:31 by jbonnin           #+#    #+#             */
/*   Updated: 2023/01/09 20:48:24 by jbonnin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*calloc(unsigned int nmemb, unsigned int size)
{
	int		i;
	void	*res;
	// overflow check?
	
	if (nmemb == 0 || size == 0)
		return (0);
	i = 0;
	while (i < nmemb)
	{
		res[i] = malloc(size);
	}
}

    //    The calloc() function allocates memory for an array of  nmemb  elements  of
    //    size  bytes each and returns a pointer to the allocated memory.  The memory
    //    is set to zero.  If nmemb or size is 0, then calloc() returns either  NULL,
    //    or  a unique pointer value that can later be successfully passed to free().
    //    If the multiplication of nmemb and size would result in  integer  overflow,
    //    then calloc() returns an error.
