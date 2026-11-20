/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10926.js                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 01:51:41 by jihoolee          #+#    #+#             */
/*   Updated: 2026/11/21 01:57:41 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const append_suffix = (str) => str + "??!";

function main() {
  const fs = require("fs")
  const input = fs.readFileSync("/dev/stdin").toString().trim();

  console.log(append_suffix(input));
}

main();
