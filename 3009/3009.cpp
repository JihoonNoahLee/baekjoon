/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3009.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 01:18:58 by jihoolee          #+#    #+#             */
/*   Updated: 2021/10/01 01:22:34 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	get_edge(int x1, int x2, int x3)
{
	int	x4;

	if (x1 == x2)
		x4 = x3;
	else if (x1 == x3)
		x4 = x2;
	else
		x4 = x1;
	return (x4);
}

int	main(void)
{
	int	x1, x2, x3, x4;
	int	y1, y2, y3, y4;

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	x4 = get_edge(x1, x2, x3);
	y4 = get_edge(y1, y2, y3);
	cout << x4 << ' ' << y4;
	return (0);
}
