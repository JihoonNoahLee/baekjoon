/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14681.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:59:29 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/27 14:59:34 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	int		x_coor;
	int		y_coor;
	int		quadrant;

   	cin >> x_coor >> y_coor;
	if (x_coor > 0)
	{
		if (y_coor > 0)
			quadrant = 1;
		else
			quadrant = 4;
	}
	else
	{
		if (y_coor > 0)
			quadrant = 2;
		else
			quadrant = 3;
	}
	cout << quadrant;
	return (0);
}
