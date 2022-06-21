/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10718.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:47:07 by jihoolee          #+#    #+#             */
/*   Updated: 2022/06/21 12:50:06 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	main(void)
{
	char	*msg;

	msg = "강한친구 대한육군\n강한친구 대한육군";
	write(1, msg, ft_strlen(msg));
	return (0);
}
