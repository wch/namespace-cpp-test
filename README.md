C++ namespace clash test
========================

This is an attempt to get two namespaces to clash. This repository contains two packages, pkgA and pkgB. Each of them has a C++ namespace called `mynamespace`, and a class called `mynamespace::myclass`.

To install, run:

```R
devtools::install_github("wch/namespace-cpp-test", subdir = "pkgA")
devtools::install_github("wch/namespace-cpp-test", subdir = "pkgB")
```


To test for a clash, run:

```R
pkgA::getmessage()
#> [1] "This is a message from pkgA."

pkgB::getmessage()
#> [1] "This is a message from pkgB."
```

If there is not a clash, they will print different things, as shown above. This is currently what happens.

If there _is_ a clash, then both of them should print the same thing.
