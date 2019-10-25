/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 14:06:40 by tde-oliv          #+#    #+#             */
/*   Updated: 2017/11/16 02:12:42 by tde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s) + 1;
	s += (i - 1);
	while (i > 0)
	{
		if (*s == (char)c)
			return ((char*)s);
		i--;
		s--;
	}
	return (NULL);
}
