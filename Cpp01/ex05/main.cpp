/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 11:37:12 by angel             #+#    #+#             */
/*   Updated: 2025/12/08 18:07:34 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl client;
    
    client.compain("HALLO");   
    client.compain("DEBUG");
    client.compain("INFO");
    client.compain("WARNING");
    client.compain("ERROR");
}