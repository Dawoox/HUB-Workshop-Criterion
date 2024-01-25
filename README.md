Criterion: what is it, why use it, how to use it.

## What is it ?

Criterion is a C/C++ testing framework. It's made to be as simple as it can get while still providing powerful features to make it usable in a wide range of use cases.

## Why use it ?

First because without unit tests (we will come back later on what is a unit test and what it's not) at Epitech you won't go far. Unit tests are mandatory to valid your stumper and count for your grade on **every** project.
But those rules at Epitech are here for a reason.

> Unit tests are what you are not: reliable

It might sound dumb, but you are not as reliable as you think, you will forget to test something when implementing a new feature or fixing an old bug. And depending on the project, if there is not a fail-safe mechanism to warn you when you break something the consequences can be quite literally life or death.
No need to worry during your cursus the chance you work on a nuclear plant are quite low (but never zero!), but you might fail a project because when implementing the last thing, on the last day, you broke half of the functions without noticing.
Testing is a way to ensure that a given function give the current output, or at least the same every time. It also help to think about every edge-case where your top-of-the-line algorithm could (and will) fail.

## How to use it?

So now we know what is it, and why it's important to use such testing framework in our code, so how do we use it ?

### Installing Criterion

First we need to install criterion (because after all criterion is 'just' a C/C++ library).
It will depends on your system so pick the one that correspond to your need.

| Plateform | Command |
| ---- | ---- |
| **Ubuntu /Debian** | `apt-get install libcriterion-dev` |
| **Arch Linux** | `pacaur -S criterion` |
| **Nix** | `nix-env -iA ixpkgs#criterion` |
| **NixOS** | *add* `nixpkgs#criterion` *into your configuration.nix* |
| **Fedora 38** | Click [here](https://intra.epitech.eu/file/Public/technical-documentations/C/install_criterion.sh) to download a script that install criterion |
*Note that to download the Fedora 38 script you need to be logged in the Epitech Intranet website*

### Using it

Take the project given in the `my_verry_interresting_project` folder. It's made to be as bare bone as it can get. The given Makefile implements the basic rule-set (all, clean, fclean, re). And here comme the interesting part: **we need to edit the Makefile.**
Because think of it, we need to compile another binary, with another list of source, it can be a mess really quickly if we don't do it well.
We can go with this by two way: either we make another Makefile for our tests, or we improve the current one. In this workshop I will show you how to improve the given Makefile, as it's my personal way of doing this, but both are valid if you follow the standards.

So let's add a new rule, per standard let's called it `unit_tests`
```Makefile
unit_tests:
	#DoSomething
```

This rule need to compile something, and thus we need the list to thing to compile.
Let's add a new 



//TODO





### Every is working, and the tests passed !

Our code is working, our tests are reporting 100% passed, any developer would be happy in this situation.

⚠️ But now come the dangerous situation 
We need to implement a new function, something that divide by two a given integer. But here is the dangerous part, we didn't wrote that code, some did it for us, here is the code that is given to you
```c
int div_by_two(int a)
{
	return ((a << 1) + 1);
}
```
![[Pasted image 20240125235914.png]]
*Copy and paste this snippet of code into calculator.c, no need to worry about calculator.h it's already filled with the needed prototype.*

Pretty sus function, but why hesitate, it should work ? Right?..

