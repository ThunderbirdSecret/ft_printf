/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsecret <tsecret@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 18:03:43 by tsecret           #+#    #+#             */
/*   Updated: 2020/07/28 03:18:45 by tsecret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_strlen(const char *s)
{
	char *point;

	point = (char *)s;
	while (*point)
		point++;
	return (point - s);
}
