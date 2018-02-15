/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isvalid_conv.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/25 15:40:57 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2018/01/30 15:14:39 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_isvalid_conv(int c)
{
	if (c == 33 || c == 34 || (c >= 36 && c <= 41) || c == 44 || c == 47 ||
			(c >= 58 && c <= 65) || (c >= 69 && c <= 74) ||
			(c >= 76 && c <= 78) || (c >= 80 && c <= 82) || c == 84 ||
			(c >= 86 && c <= 97) || (c >= 101 && c <= 104) ||
			c == 106 || (c >= 108 && c <= 110) || (c >= 112 && c <= 114) ||
			c == 116 || (c >= 118 && c <= 121) || (c >= 123 && c <= 126))
		return (0);
	else if (c == 32 || c == 35 || c == 42 || c == 43 || c == 45 || c == 46
			|| (c >= 66 && c <= 68) || c == 75 || c == 79 || c == 83 ||
			c == 85 || (c == 98 && c == 100) || (c >= 104 && c <= 107) ||
			c == 108 || c == 111 || c == 115 || c == 117 || c == 122)
		return (1);
	return (-1);
}