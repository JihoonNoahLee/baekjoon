/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2675.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 00:08:37 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/24 00:08:49 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int	main(void)
{
	int				inputs;
	cin >> inputs;
	vector<int>		iters(inputs);
	vector<string>	words(inputs);

	for (int i = 0; i < inputs; i++)
		cin >> iters[i] >> words[i];
	for (int i = 0; i < inputs; i++)
	{
		for (int j = 0; j < words[i].size(); j++)
			for (int k = 0; k < iters[i]; k++)
				cout << words[i][j];
		cout << endl;
	}
	return (0);
}
