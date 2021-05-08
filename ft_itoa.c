/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaplant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 12:29:15 by llaplant          #+#    #+#             */
/*   Updated: 2021/05/07 15:23:18 by llaplant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = ft_strlen(str);
	while (j > i)
	{
		j--;
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int	i;
	int	neg;
	char	*tmp;

	i = 0;
	neg = 0;
	tmp = malloc(sizeof(char) * 12);
	if (tmp == NULL || n == 0)
		return ((n == 0) ? "0" : NULL);
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		neg = 1;
		n = n * -1;
	}
	while (n)
	{
		tmp[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	if (neg)
		tmp[i] = '-';
	return ft_strrev(tmp);
}

int main()
{
	char *num = ft_itoa(1654);
	printf("%s", num);
	return (0);
}
