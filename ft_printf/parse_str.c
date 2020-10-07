/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpotter <wpotter@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 20:21:32 by tsecret           #+#    #+#             */
/*   Updated: 2020/07/28 01:58:48 by wpotter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_str(char *list, struct s_flags flag)
{
	int len;

	if (!list)
		list = "(null)";
	flag.len_list = ft_strlen(list);
	if (flag.precision && flag.precision > flag.len_list)
		flag.precision = flag.len_list;
	if (flag.dot && flag.precision < flag.len_list)
		(len = flag.width - flag.precision);
	else
		len = flag.width - flag.len_list;
	if (!flag.minus && !flag.zero && flag.width > 0)
		flag.count += ft_align(' ', len);
	if (flag.zero && !flag.minus)
		flag.count += ft_align('0', len);
	if (flag.dot && !flag.sign_w)
		(flag.count += print_str(list, flag.precision));
	else
		(flag.count += print_str(list, flag.len_list));
	if (flag.minus || flag.sign_w)
		flag.count += ft_align(' ', flag.sign_w
		? (flag.width * -1) - flag.len_list : len);
	return (flag.count);
}
