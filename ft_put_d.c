/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:23:03 by rkerobya          #+#    #+#             */
/*   Updated: 2025/02/23 19:24:07 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_num_length(int i)
{
	int	length;

	length = 0;
	if (i <= 0)
	{
		length = 1;
	}
	while (i != 0)
	{
		length++;
		i = i / 10;
	}
	return (length);
}

char	*ft_str(char *s, unsigned int nb, long int length)
{
	while (nb > 0)
	{
		s[length] = 48 + (nb % 10);
		length--;
		nb = nb / 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	unsigned int	nb;
	int				sign;
	long int		len;
	char			*d;

	sign = 1;
	len = ft_num_length(n);
	d = (char *)malloc(sizeof(char) * (len + 1));
	if (!d)
		return (NULL);
	d[len--] = '\0';
	if (n == 0)
		d[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		nb = n * -1;
		d[0] = '-';
	}
	else
		nb = n;
	d = ft_str(d, nb, len);
	return (d);
}

int	ft_put_d(int nb)
{
	int		length;
	char	*n;

	n = ft_itoa(nb);
	length = ft_put_s(n);
	free(n);
	return (length);
}
