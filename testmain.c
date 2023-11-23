/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinchas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:46:24 by rpinchas          #+#    #+#             */
/*   Updated: 2022/11/18 12:32:44 by rpinchas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{	
	
	//%d und %i Check:
	printf("\n-------------%%d & %%i Check-------------\n\n");
	fflush(NULL);
	
	ft_printf("ft_printf: %d\n", ft_printf("Test1: %i %d ", -673, 2147483647));
	printf("Original: %d\n", printf("Test1: %i %d ", -673, 2147483647));
	fflush(NULL);
	//%c und %s Check:
	printf("\n-------------%%c & %%s Check-------------\n\n");
	fflush(NULL);

	ft_printf("ft_printf: %d\n", ft_printf("Test1: %c %s ", 'A', "Hallo"));
	printf("Printf: %d\n", printf("Test1: %c %s ", 'A', "Hallo"));
	fflush(NULL);
	ft_printf("ft_printf: %d\n", ft_printf("Test2: %s ", 0));
	printf("Printf: %d\n", printf("Test2: %s ", 0));
	fflush(NULL);
	//%p Check:
	printf("\n-------------%%p Check-------------\n\n");
	fflush(NULL);

	ft_printf("ft_printf: %d\n", ft_printf("Test1: %p ", "Hallo"));
	printf("Printf: %d\n", printf("Test1: %p ", "Hallo"));
	fflush(NULL);
	ft_printf("ft_printf: %d\n", ft_printf("Test2: %p ", 0));
	printf("Printf: %d\n", printf("Test2: %p ", 0));
	fflush(NULL);
	ft_printf("ft_printf: %d\n", ft_printf("Test3: %p ", -1));
	printf("Printf: %d\n", printf("Test3: %p ", -1));
	fflush(NULL);
	ft_printf("ft_printf: %d\n", ft_printf("Test4: %p ", 15));
	printf("Printf: %d\n", printf("Test4: %p ", 15));
	fflush(NULL);
	ft_printf("Test5: ft_printf:\n\tLONG_MIN: %p\t LONG_MAX: %p\n", LONG_MIN, LONG_MAX);
	ft_printf("\tULONG_MAX: %p\t -ULONG_MAX: %p\n", ULONG_MAX, -ULONG_MAX);
	printf("Test5: Printf:\n\tLONG_MIN: %p\t LONG_MAX: %p\n", LONG_MIN, LONG_MAX);
	printf("\tULONG_MAX: %p\t -ULONG_MAX: %p\n", ULONG_MAX, -ULONG_MAX);
	fflush(NULL);
	ft_printf("ft_printf: %d\n", ft_printf("Test6: %p ", ULONG_MAX));
	printf("Printf: %d\n", printf("Test6: %p ", ULONG_MAX));
	fflush(NULL);
	ft_printf("ft_printf: %d\n", ft_printf("Test7: %p ", LONG_MAX));
	printf("Printf: %d\n", printf("Test7: %p ", LONG_MAX));
	fflush(NULL);
	ft_printf("ft_printf: %d\n", ft_printf("Test8: %p ", LONG_MIN));
	printf("Printf: %d\n", printf("Test8: %p ", LONG_MIN));
	fflush(NULL);
	//%x Check:
	printf("\n-------------%%x Check-------------\n\n");
	fflush(NULL);

	ft_printf("ft_printf: %d\n", ft_printf("Test1: %x ", 1000));
	printf("Printf: %d\n", printf("Test1: %x ", 1000));
	fflush(NULL);
	ft_printf("ft_printf: %d\n", ft_printf("Test2: %x ", 0));
	printf("Printf: %d\n", printf("Test2: %x ", 0));
	fflush(NULL);
	ft_printf("ft_printf: %d\n", ft_printf("Mine:\tINT_MAX: %x\n\t INT_MIN: %x\n\t LONG_MAX: %x\n\t LONG_MIN: %x\n\t ULONG_MAX: %x\n\t 0: %x\n\t -42: %x\n\t", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	printf("Printf: %d\n", printf("Orig:\tINT_MAX: %x\n\t INT_MIN: %x\n\t LONG_MAX: %x\n\t LONG_MIN: %x\n\t ULONG_MAX: %x\n\t 0: %x\n\t -42: %x\n\t", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));

	//mix Check:
	//%X Check:
	printf("\n-------------%%X Check-------------\n\n");
	fflush(NULL);

	ft_printf("ft_printf: %d\n", ft_printf("Test1: %X ", 1000));
	printf("Printf: %d\n", printf("Test1: %X ", 1000));
	fflush(NULL);
	ft_printf("ft_printf: %d\n", ft_printf("Test2: %X ", 1));
	printf("Printf: %d\n", printf("Test2: %X ", 1));
	fflush(NULL);
	ft_printf("ft_printf: %d\n", ft_printf("Test3: %X ", 0));
	printf("Printf: %d\n", printf("Test3: %X ", 0));
	fflush(NULL);
	ft_printf("ft_printf: %d\n", ft_printf("Mine:\tINT_MAX: %X\n\t INT_MIN: %X\n\t LONG_MAX: %X\n\t LONG_MIN: %X\n\t ULONG_MAX: %X\n\t 0: %X\n\t -42: %X\n\t", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	printf("Printf: %d\n", printf("Orig:\tINT_MAX: %X\n\t INT_MIN: %X\n\t LONG_MAX: %X\n\t LONG_MIN: %X\n\t ULONG_MAX: %X\n\t 0: %X\n\t -42: %X\n\t", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));

	//mix Check:
	//%u Check:
	printf("\n-------------%%u Check-------------\n\n");
	fflush(NULL);

	ft_printf("ft_printf: %d\n", ft_printf("Test1: %u ", 1000));
	printf("Printf: %d\n", printf("Test1: %u ", 1000));
	fflush(NULL);
	ft_printf("ft_printf: %d\n", ft_printf("Test2: %u ", 1));
	printf("Printf: %d\n", printf("Test2: %u ", 1));
	fflush(NULL);
	ft_printf("ft_printf: %d\n", ft_printf("Test3: %u ", -1000));
	printf("Printf: %d\n", printf("Test3: %u ", -1000));
	fflush(NULL);
	ft_printf("ft_printf: %d\n", ft_printf("Test4: %u ", 0));
	printf("Printf: %d\n", printf("Test4: %u ", 0));
	fflush(NULL);
	ft_printf("ft_printf: %d\n", ft_printf("Test5: %u ", -5));
	printf("Printf: %d\n", printf("Test5: %u ", -5));
	fflush(NULL);
	ft_printf("ft_printf: %d\n", ft_printf("Test6: %x ", -10));
	printf("Printf: %d\n", printf("Test6: %x ", -10));
	fflush(NULL);
	ft_printf("ft_printf: %d\n", ft_printf("Test7: %X ", -160));
	printf("Printf: %d\n", printf("Test7: %X ", -160));
	fflush(NULL);
	ft_printf("ft_printf: %d\n", ft_printf("Mine:\tINT_MAX: %u\n\t INT_MIN: %u\n\t LONG_MAX: %u\n\t LONG_MIN: %u\n\t ULONG_MAX: %u\n\t 0: %u\n\t -42: %u\n\t", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	printf("Printf: %d\n", printf("Orig:\tINT_MAX: %u\n\t INT_MIN: %u\n\t LONG_MAX: %u\n\t LONG_MIN: %u\n\t ULONG_MAX: %u\n\t 0: %u\n\t -42: %u\n\t", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));

	//mix Check:
	printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	fflush(NULL);
	ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0, 0, 0, 42, 0);

	return (0);
}
