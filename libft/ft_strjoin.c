/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconstab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:31:00 by sconstab          #+#    #+#             */
/*   Updated: 2019/06/05 15:47:26 by sconstab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	tlen;
	char	*ns;

	if (!s1 || !s2)
		return (NULL);
	tlen = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(ns = ft_strnew(tlen)))
		return (NULL);
	ft_strcat(ns, s1);
	ft_strcat(ns, s2);
	return (ns);
}
