/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   broom.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/29 10:13:42 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2018/03/29 11:52:26 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	int i;

	i = -1;
	printf("	   | |\n");
	printf("	   |=|\n");
	printf("	   |=|\n");
	while (++i < 13)
		printf("	   | |\n");
	printf("	 .=/I\\=.\n");
	printf("	////V\\\\\\\\\n");
	printf("	|#######|\n");
	i = -1;
	while (++i < 4)
		printf("	|||||||||\n");
}
