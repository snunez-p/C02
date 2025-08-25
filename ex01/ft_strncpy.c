/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaltea <amaltea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 23:23:00 by amaltea           #+#    #+#             */
/*   Updated: 2025/08/25 19:02:00 by amaltea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/*
int main(void)
{
    char src[] = "Hola";
    char dest[10];

    ft_strncpy(dest, src, 10);

    printf("src:  %s\n", src);
    printf("dest: %s\n", dest);

    return 0;
}
*/
