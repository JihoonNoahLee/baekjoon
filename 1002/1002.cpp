/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1002.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:51:55 by jihoolee          #+#    #+#             */
/*   Updated: 2021/10/06 15:24:55 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	square(int n)
{
	return (n * n);
}

int	calc_inter_num(int dsquare, int r1, int r2)
{
	if (dsquare == 0 && r1 == r2)
		return (-1);
	else if (dsquare == square(r1 + r2) || dsquare == square(r1 - r2))
		return(1);
	else if (dsquare < square(r1 - r2) || dsquare > square(r1 + r2))
		return (0);
	else if (dsquare < square(r1 + r2))
		return (2);
	else
		return (-2);
}

int	main(void)
{
	int		cases;
	int		x1, y1, x2, y2;
	int		r1, r2;

	cin >> cases;
	for (int i = 0; i < cases; i++)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		cout <<
			calc_inter_num(square(x2 - x1) + square(y2 - y1), r1, r2) << endl;
	}
	return (0);
}
