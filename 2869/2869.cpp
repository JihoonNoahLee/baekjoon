/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2869.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:30:48 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/27 14:30:57 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main(void)
{
	int	A, B, V;
	int	result;

	cin >> A >> B >> V;
	result = 1 + (V - A) / (A - B);
	if ((V - A) % (A - B))
		result++;
	cout << result;
	return (0);
}
