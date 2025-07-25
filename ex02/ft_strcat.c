/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:20:37 by tlaranje          #+#    #+#             */
/*   Updated: 2025/07/25 09:48:16 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] + src[i];
		i++;	
	}
	return (dest[i]);
}

int	main(void)
{
	char	src[10];
	char	dest[10];
	
	strcpy(src, "porto");
	strcpy(dest, "42");
	printf("Src: %d\n", src);
	printf("Dest: %d\n", ft_strncmp(dest, src));
	return (0);
}
