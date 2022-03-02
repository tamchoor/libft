/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamchoor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 20:49:01 by tamchoor          #+#    #+#             */
/*   Updated: 2021/10/16 20:49:03 by tamchoor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	count;

	if (s == 0 || f == 0)
		return ;
	count = 0;
	while (s[count] != '\0')
	{
		(*f)(count, (s + count));
		count++;
	}
	return ;
}
