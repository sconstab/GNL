/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 15:06:08 by marvin            #+#    #+#             */
/*   Updated: 2020/05/18 15:06:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin_free(char *s1, char *s2)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s1 || !(str = (char *)malloc(sizeof(char)\
			* ((ft_strlen(s1) + ft_strlen(s2) + 1)))))
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		str[i] = *s2;
		s2++;
		i++;
	}
	str[i] = '\0';
	free(s1);
	return (str);
}