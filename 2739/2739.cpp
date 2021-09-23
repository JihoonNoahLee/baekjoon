/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2739.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 00:11:13 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/24 00:11:17 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	int		dan;
	int		iter;

	cin >> dan;
	iter = 1;
	while (iter <= 9)
	{
		cout << dan << " * " << iter << " = " << dan * iter << endl;
		iter++;
	}
}
