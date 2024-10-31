/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:37:38 by kilchenk          #+#    #+#             */
/*   Updated: 2024/10/31 14:48:59 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PMERGE_ME_HPP
#   define PEMRGE_ME_HPP

# include <iostream>
# include <vector>
# include <list>
# include <cstring>
# include <climits>
# include <cstdlib>
# include <sstream>
# include <deque>
# include <ctime>
# include <iomanip>

# define RED			"\033[0;31m"
# define GREEN			"\033[1m\033[32m"
# define BLUE           "\033[1m\033[36m"
# define PURPLE         "\033[1m\033[35m"
# define RESET_COLOR 	"\033[0m"
#define  BOLDRED        "\033[1m\033[31m"
# define RESET_LINE 	"\033[0m" << std::endl
# define RE_TERMINAL	std::cout << "\e[1;1H\e[2J"

template<typename Container>
class PmergeMe
{
    private:
        typedef std::pair<int, int> _typePair;
        Container                   _data;
        double                      _time;
        int                         _last;
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &copy);
        PmergeMe &operator=(const PmergeMe &copy);
        ~PmergeMe();
    public:
        PmergeMe(char **argv);
        std::vector<_typePair>  presort_pairs();
        std::vector<int>        jacobsenChain(size_t size);
        void                    insertsort(std::vector<_typePair> &pair_array);
        void    printRes();
        void    sort();
        int		binarySearch(int target);
        void    getTime();
};


#endif