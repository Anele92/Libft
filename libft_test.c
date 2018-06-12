/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 09:34:14 by anoroita          #+#    #+#             */
/*   Updated: 2018/06/12 17:11:18 by anoroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include "color_text.h"

void	test_ft(char	*ft_name, char *descrip)
{
	printf("PASSED TESTS  ~~ ");
	green();
	printf("Norme\t42FileChecker\tlibft-unit-test\tLibtest\n");
	reset();
	cyan();
	printf("------------------------------------------------------------------------------------------------\n");
	reset();
	green();
	printf("Function Name - ");
	reset();
	yellow();
	printf("%s\n", ft_name);
	reset();
	cyan();
	underline();
	printf("FUNCTION DESCRIPTION\n");
	closeline();
	reset();
	printf("- %s\n", descrip);
	magenta();
	printf("FOR EXAMPLE");
	reset();
}

int		main(void)
{

	green();
	printf("ANOROITA TEST_STARTING\tPERSONAL LIBFT TESTS...\n\n\n");
	reset();
	test_ft("ft_memset.c", "Function fills the first n bytes of the memory area pointed to by s with the constant byte c.\n");

	char str0[50] = "WeThinkCode is for programming fanatics.";

	printf("\nBefore ft_memset(): %s\n", str0);
	if (ft_memset(str0 + 13, '.', 8*sizeof(char)))
	{
		printf("After ft_memset():  %s\n", str0);
		green();
		printf("\nTEST PASSED - OK!");
		reset();
		printf("(line 54)\n\n");
	}

	test_ft("ft_bzero.c", "Function sets the first n bytes of the area starting at s to zero\n");

	char str1[] = "abcdcd";
	int c = 6;

	printf("\nBefore ft_bzero.c(): %s\n", str1);
	ft_bzero(str1, c);
	printf("String after first |%d| bytes changes to 0 is - |%s|\n", c,str1);
	green();
	printf("TEST PASSED - OK!");
	reset();
	printf("(line 69)\n\n");

	test_ft("ft_memcpy.c", "Copies n bytes from memory area src to memory area dest. The memory areas must not overlap.\n");

	char str2[50] = "WeThinkCode is for programming fanatics.";
	char dest2[50];
	strcpy(dest2,"Heloooo!!");
	printf("\nBefore ft_memcpy(): %s\n", dest2);
	if (ft_memcpy(dest2, str2, ft_strlen(str2)+1))
	{
		printf("After ft_memcpy():  %s\n", dest2);
		green();
		printf("TEST PASSED - OK!");
		reset();
		printf("(line 82)\n\n");
	}


	test_ft("ft_memccpy.c", "Function copies no more than n bytes from memory area src to memory area dest, stopping\n");
	printf("\nWhen the character c is found.\n");
	char *src = "WeThinkcode is for programming fanatics.";
	char dest[50];
	char *ptr;
	printf("Before ft_memccpy(): %s\n", src);
	ptr = (char *) memccpy(dest, src, 'c', strlen(src));
	if (ptr)
	{
		*ptr = '\0';
		printf("After ft_memccpy():%s\n", dest);
		green();
		printf("TEST PASSED - OK!");
		reset();
		printf("(line 98)\n\n");
	}
	else
		printf("The character wasn't found\n");

	test_ft("ft_memmove.c","Function copies n bytes from memory area src to memory area dest. The memory areas may overlapi");

	char	 dest4[] = "oldstring";
	const char src4[] = "newstring";

	printf("\nBefore ft_memmove() dest = %s, src = %s\n", dest4, src4);
	if(ft_memmove(dest4, src4, 9))
	{
		printf("After ft_memmove() dest = %s, src = %s\n", dest4, src4);
		green();
		printf("TEST PASSED - OK!");
		reset();
		printf("(line 116)\n\n");
	}


	test_ft("ft_memdel.c","This function takes in the parameter of the address of a pointer. The zone pointed to should be \nliberated with free. The pointer is then set to NULL.");

	void	*mem;

	mem = malloc(20 * sizeof(*mem));

	ft_memdel(&mem);
	if (!mem)
	{
		printf("\nft_memdel() SUCESS\n");
		green();
        printf("TEST PASSED - OK!");
        reset();
        printf("(line 133)\n\n");
	}

	test_ft("ft_memchr.c","Function locates the first occurrence of c (converted to an unsigned char) in string b.");

	char	*s = "abcdefg";

	char	*find = ft_memchr(s, 'e', 6);
	if (find != NULL)
	{
		printf ("\nAfter ft_memchr() :|%s| was found\n", find);
		green();
        printf("TEST PASSED - OK!");
        reset();
        printf("(line 147)\n\n");
	}
	else
		printf("Search character not found\n");

	test_ft("ft_memalloc.c","Allocates - with malloc(3) and returns a “fresh” memory area or else NULL.");
	
	void	*alloc;

	alloc = ft_memalloc(20);
	if (!alloc)
	{
		printf("\nMemory NOT allocated\n");
	}
	else
	{
		printf("\nMemory sucessffully allocated!\n");
		green();
        printf("TEST PASSED - OK!");
        reset();
        printf("(line 163)\n\n");
	}

	test_ft("ft_atoi.c","The atoi function converts the initial portion of the string point to by str to\n int representation.");
	if (ft_atoi("-4578") || ft_atoi("+125") || ft_atoi(" 	999") || ft_atoi("1247"))
	{
		printf("\nft_atoi(\"-4578\") || ft_atoi(\"+125\") || ft_atoi(\"    999\") || ft_atoi(\"1247\")\n");
		printf("Converted successfully\n");
		green();
        printf("TEST PASSED - OK!");
        reset();
        printf("(line 178)\n\n");
	}
	else
		printf("Tests FAILED");





	return (0);
}
