/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1011.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:51:44 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/29 23:07:25 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int	get_steps(int dist)
{
	int	max_len;
	int	inbetween_steps = 0;

	max_len = floor(sqrt(dist));
	inbetween_steps = ceil(float(dist - pow(max_len, 2)) / float(max_len));
	return ((2 * max_len - 1) + inbetween_steps);
}

int	main(void)
{
	int			cases;
	cin >> cases;
	int			strt, dst;
	vector<int>	results(cases);

	for (int i = 0; i < cases; i++)
	{
		cin >> strt >> dst;
		results[i] = get_steps(dst - strt);
	}
	for (int i = 0; i < cases; i++)
		cout << results[i] << endl;
	return (0);
}
