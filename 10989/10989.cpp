/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10989.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:23:43 by jihoolee          #+#    #+#             */
/*   Updated: 2021/11/25 19:54:01 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

#define MAX	10000

using namespace std;

vector<int>	count_vec(MAX, 0);

int	main(void)
{
	int	len;
	int	temp;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> len;
	for (int idx = 0; idx < len; idx++)
	{
		cin >> temp;
		count_vec[temp - 1] += 1;
	}
	for (int num = 1; num <= MAX; num++)
	{
		for (int rep = count_vec[num - 1]; rep > 0; rep--)
			cout << num << '\n';
	}
	return (0);
}
