/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconstab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:44:53 by sconstab          #+#    #+#             */
/*   Updated: 2019/06/04 14:49:50 by sconstab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(char const *s, char c)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (s[i] != c)
		j++;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c && s[i])
				i++;
			if (s[i])
				j++;
		}
		else
			while (s[i] != c && s[i])
				i++;
	}
	return (j);
}
