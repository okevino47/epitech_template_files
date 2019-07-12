/*
** EPITECH PROJECT, 2018
** outputs
** File description:
** outputs.cpp
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <criterion/assert.h>
#include "../nm/includes/nm.h"

TestSuite(redirect, .timeout = 1);

Test(nm_on_directory, stdout_)
{
	cr_assert(map_my_file(NULL, "directory_test/") == -1,
		"Crashed at \"map_my_file\"");
}
