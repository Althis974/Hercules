/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bzero.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 09:10:26 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 09:10:28 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	if (!n)
		return ;
	str = (char *)s;
	i = 0;
	while (i < n)
		str[i++] = 0;
}
