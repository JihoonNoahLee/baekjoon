/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1000.js                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 01:06:30 by jihoolee          #+#    #+#             */
/*   Updated: 2026/11/21 01:36:48 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().split(" ")

const a = parseInt(input[0])
const b = parseInt(input[1])

console.log(a + b)
