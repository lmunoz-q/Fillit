/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:56:49 by tde-oliv          #+#    #+#             */
/*   Updated: 2017/11/06 15:28:15 by tde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	if (*s1 == *s2 && !(*s1))
		return (1);
	if (*s1 != *s2)
		return (0);
	return (ft_strequ(s1 + 1, s2 + 1));
}
