/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10699.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 16:33:44 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/02 16:35:57 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

int	main(void)
{
	time_t		t;
	struct tm	tm;
	int			year;
	int			month;
	int			day;

	t = time(NULL);
	tm = *localtime(&t);
	year = tm.tm_year + 1900;
	month = tm.tm_mon + 1;
	day = tm.tm_mday;
	printf("%04d-%02d-%02d\n", year, month, day);
	return (0);
}
