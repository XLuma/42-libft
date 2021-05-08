/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luma <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:42:40 by luma              #+#    #+#             */
/*   Updated: 2021/05/05 09:48:49 by llaplant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char*)dest = *(unsigned char*)src;
	       if (*(unsigned char*)src == (unsigned char)c)
	       {
		return (dest);
	       }
		dest++;
		src++;
		i++;
	}
	return (NULL);
}
