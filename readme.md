# Software variants demo

## Introduction

This project has an application which depends on a library. It uses its abstract interface without knowing what is the underlying implementation.

We can decide which implementations the application will use by passing one of the following values to the build script:

1. Use only implementation 1.
2. Use only implementation 2.
3. Use both implementations: 1 and 2.

## How to build and run

To run the build script and run the application, execute the commands in Listing 1 in a shell.

```
source build.sh <variant>
out/bin/application
```

Listing 1 - Build and run commands.

## Build and run example

Let us build and run the first variant of our application. After running the commands in Listing 2, we get the output in Listing 3.

```
source build.sh 1
out/bin/application
```

Listing 2 - Building and running an application that uses the library implementation 1.

```
Running implementation 1's function
Running implementation 1's function
```

Listing 3 - Text output of the application.

If we switch the build.sh paramter from 1 to 3, the application output now shows that the application is using both implementations (Listing 4).

```
Running implementation 1's function
Running implementation 2's function
```

Listing 4 - Text output of the application when using both libraries (option 3).

## Notes

By keeping the implementations as data structures, we can switch between implementation just by setting a pointer in the application configuration. Moreover, we can allow multiple implementations to co-exist because the structure name plays the role of creating an individual namespace for each one of them (e.g. implementation_1->symbol, implementation_2->symbol).
