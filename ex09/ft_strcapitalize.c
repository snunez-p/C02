/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 21:27:36 by amaltea           #+#    #+#             */
/*   Updated: 2025/08/25 22:05:44 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	up;

	i = 0;
	up = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (up == 1)
				str[i] -= 32;
			up = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			up = 0;
		else
			up = 1;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void){
	char str1[] = "pruEba ? AE dEl 42Ejercio*eX09";
	char str2[] = "salut,
		comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str1));
	printf("%s\n", ft_strcapitalize(str2));
}
*/
