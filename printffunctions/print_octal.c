/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_octal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 13:51:04 by ssong             #+#    #+#             */
/*   Updated: 2018/03/23 09:20:24 by ssong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "ft_printf.h"

/*
static char	*precision_octal(t_info *info, char *buf)
{
	char	*temp;

	if (!info->precision && !info->hash)
		buf = ft_memset(buf, 0, ft_strlen(buf));
	else if (info->precision > (int)ft_strlen(buf))
	{
		temp = ft_memalloc(info->precision + 1);
		temp = ft_memset(temp, '0', info->precision);
		temp = ft_strrcpy(temp, buf, ft_strlen(temp), ft_strlen(buf));
		ft_memdel((void **)&buf);
		return (temp);
	}
	return (buf);
}

t_info		*print_octal(va_list *args, t_info *info)
{
	uintmax_t	num;
	char		*buf;

	buf = NULL;
	
	num = hexi_modifiers(t_info *info, va_list *args)
	buf = ft_itoa_base(num, 8);
	buf = precision_octal(t_info *info, buf);
	if (info->space > 0 && info->space > (int)ft_strlen(buf))
	{
		info->printed += info->space;
		temp = ft_memalloc(info->space + 1);
		if (info->zero == 1)
			temp = ft_memset(temp, '0', info->space);
		else
			temp = ft_memset(temp, ' ', info->space);
		if (info->hash == 1)
			buf = ft_strcatnew("0", buf);
		if (info->left == 1)
			temp = ft_strncpy(temp, buf, ft_strlen(buf));
		else if (info->left == 0)
			temp = ft_strrcpy(temp, buf, ft_strlen(temp), ft_strlen(buf));
		ft_putstr(temp);
		free(temp);
	}
	else
	{
		if (info->hash == 1 && num > 0)
		{
			temp = ft_strjoin("0", buf);
			free(buf);
			buf = ft_strdup(temp);
			free(temp);
		}
		if (info->plus == 1)
		{
			info->printed++;
			ft_putchar('+');
		}
		else if (info->sign == 1)
		{
			info->printed++;
			ft_putchar(' ');
		}
		info->printed += ft_strlen(buf);
		ft_putstr(buf);
	}
	free(buf);
	return (info);
}
*/
