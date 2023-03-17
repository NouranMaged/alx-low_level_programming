
Skip to content
Pull requests
Issues
Codespaces
Marketplace
Explore
@NouranMaged
ianliu-johnston /
holbertonschool-low_level_programming
Public

Fork your own copy of ianliu-johnston/holbertonschool-low_level_programming

Code
Issues
Pull requests
Actions
Projects
Security

    Insights

holbertonschool-low_level_programming/0x01-variables_if_else_while/0-positive_or_negative.c
Ian Liu-Johnston Added task 0 and aliases.
Latest commit 736bc22 Oct 13, 2016
History
0 contributors
30 lines (28 sloc) 443 Bytes
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a random number is positive, negative or zero.
(*
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);

}
Footer
© 2023 GitHub, Inc.
Footer navigation

    Terms
    Privacy
    Security
    Status
    Docs
    Contact GitHub
    Pricing
    API
    Training
    Blog
    About


