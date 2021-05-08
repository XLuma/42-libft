/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaplant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:55:35 by llaplant          #+#    #+#             */
/*   Updated: 2021/05/06 15:59:13 by llaplant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*addr;

	addr = (void*)malloc(nitems * size);
	if (!addr)
	{
		return (NULL);
	}
	ft_bzero(addr, nitems);
	return (addr);
}

