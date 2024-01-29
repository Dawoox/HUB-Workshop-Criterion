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
