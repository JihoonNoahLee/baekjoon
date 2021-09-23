/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1008.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:48:12 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/23 23:48:32 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	double	a;
	double	b;

	cin >> a >> b;
	cout << fixed;
	cout.precision(9);
	cout << a / b;
	return (0);
}
