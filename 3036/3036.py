# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    3036.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/10 12:26:35 by jihoolee          #+#    #+#              #
#    Updated: 2022/09/10 12:37:14 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def get_gcd(a, b):
    if (b == 0):
        return a
    return get_gcd(b, a % b)

def get_rotation(unit_ring, ring):
    gcd = get_gcd(unit_ring, ring)

    return str(unit_ring // gcd) + '/' + str(ring // gcd)

def main():
    _ = int(input())
    rings = list(map(int, input().split()))
    unit_ring = rings[0]
    rings = rings[1:]

    for ring in rings:
        print(get_rotation(unit_ring, ring))

if (__name__ == '__main__'):
    main()
