/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3053.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:59:08 by jihoolee          #+#    #+#             */
/*   Updated: 2021/10/05 16:08:05 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define PI	3.14159265358979323846

using namespace std;

int	main(void)
{
	int		r;
	double	euclid_area, taxi_area;

	cin >> r;
	euclid_area = double(r * r) * PI;
	taxi_area = double(r * r) * 2;
	cout << fixed;
	cout.precision(6);
	cout << euclid_area << endl << taxi_area << endl;
	return (0);
}
