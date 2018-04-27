/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/13 11:00:28 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2018/01/22 13:39:35 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_putnstr(char const *s, size_t len)
{
	size_t	i;

	i = 0;
	if (s)
	{
		while (i < len)
		{
			ft_putchar(s[i]);
			i++;
		}
	}
	return (i);
}
