/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1085.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:44:06 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/30 15:50:15 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int>	get_dist(int curr_x, int curr_y, int edge_x, int edge_y)
{
	vector <int>	dist(4);

	dist[0] = curr_x - 0;
	dist[1] = curr_y - 0;
	dist[2] = edge_x - curr_x;
	dist[3] = edge_y - curr_y;
	return (dist);
}

int	main(void)
{
	int				curr_x, curr_y;
	int				edge_x, edge_y;
	vector <int>	dist;

	cin >> curr_x >> curr_y >> edge_x >> edge_y;
	dist = get_dist(curr_x, curr_y, edge_x, edge_y);
	sort(dist.begin(), dist.end());
	cout << dist[0];
	return (0);
}
