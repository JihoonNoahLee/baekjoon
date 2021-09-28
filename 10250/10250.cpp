/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10250.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:43:20 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/28 15:09:13 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int	get_suitable_room(int max_floor, int max_roomnum, int guestnum)
{
	int	floor, room;

	floor = guestnum % max_floor;
	room = guestnum / max_floor + 1;
	if (floor == 0)
	{
		floor = max_floor;
		room--;
	}
	return (floor * 100 + room);
}

int	main(void)
{
	int			cases;
	cin >> cases;
	vector<int>	max_floor(cases),
				max_roomnum(cases),
				guestnum(cases);

	for (int i = 0; i < cases; i++)
		cin >> max_floor[i] >> max_roomnum[i] >> guestnum[i];
	for (int i = 0; i < cases; i++)
		cout <<
			get_suitable_room(max_floor[i], max_roomnum[i], guestnum[i])
			<< endl;;
	return (0);
}
