/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaplant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 10:59:38 by llaplant          #+#    #+#             */
/*   Updated: 2021/05/07 11:46:26 by llaplant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	verify_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set++)
		{
			return (1);
		}
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;
	int	i;
	char	*s2;

	i = 0;
	len = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(s2) * (len + 1));
	if (!s2)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (verify_set(s1[i], set) == 1)
		i++;
	if (i == len)
	{
		if (!(s1 = ft_strdup("")))
			return (NULL);
		else
			return (ft_strdup(s1));
	}
	while (verify_set(s1[len - 1], set) == 1)
		len--;
	s2 = ft_substr(s1, i, len - i);
	return (s2);
}	
