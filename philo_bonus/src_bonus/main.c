/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokoucha <mokoucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 12:17:01 by mokoucha          #+#    #+#             */
/*   Updated: 2022/06/25 12:17:03 by mokoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_philo	philo;
	int		*pid;

	if ((ac == 6 || ac == 5) && check_in(ac, av))
	{
		if (!ft_allocation(&philo, av))
			return (printf("Error in allocation\n"), 1);
		pid = ft_thread(&philo);
		sem_close(philo.printf);
		sem_close(philo.zack);
		ft_exit(&philo, pid, 0);
	}
}
