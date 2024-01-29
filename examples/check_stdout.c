/*
** EPITECH PROJECT, 2024
** HUB-Workshop-Criterion
** File description:
** check_stdout.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdio.h>

Test(example, default, .init = cr_redirect_stdout) {
    printf("Hello World!\n");
    cr_assert_stdout_eq_str("Hello World!\n");
}

Test(example, own_main, .init = cr_redirect_stdout) {
    char argv0[] = "is not needed";
    char argv1[] = "Rail Safety";
    char argv2[] = "Fairy tales";
    char *argvs[] = {&argv0, &argv1, &argv2};
    cr_assert_eq(0, anagram(3, argvs));
}
