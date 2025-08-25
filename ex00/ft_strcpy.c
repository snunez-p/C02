/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 23:19:12 by amaltea           #+#    #+#             */
/*   Updated: 2025/08/25 19:00:57 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
		char src[] = "Hola 42";
		char dest[10];

		ft_strcpy(dest, src);

		printf("src:  %s\n", src);
		printf("dest: %s\n", dest);

		return 0;
}
*/
