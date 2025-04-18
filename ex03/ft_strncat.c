/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:49:40 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/03/31 15:40:04 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	sizedest;
	unsigned int	i;

	sizedest = ft_strlen(dest);
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[sizedest + i] = src[i];
		i++;
	}
		dest[sizedest + i] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char str1[13] = "good";
	char str2[6] = " good";

	printf("numero : %d\n", ft_strlen(str1));
	ft_strncat(str1, str2, 9);
	printf("Text :%s\n", str1);
}
*/
