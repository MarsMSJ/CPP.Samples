
# CPP Samples Library
 
This is a library containing code to help with generating samples for input into your algorithms and data structures.  The library was written in C++ (C++14.) In this code we use the arc4random as the base generator used to generate random numbers, number sequences, characters, and strings. For Windows and Linux platforms, mt19937 (Mersenne twister) is used. This is still a work in progress.

## Getting Started

### Prerequisities

In order to build and run this code you'll need a *C++ compiler compatible with C++14.* To run the test you'll need clone and build *GoogleTest* Github project on your platform.


* [GNU Compiler](https://gcc.gnu.org)  I used GCC 7.2.0 on *MacOS High Sierra*
* [Homebrew](https://brew.sh) Highly recommend *Homebrew* if you're using *MacOS.* It's awesome!
* [Google Test](https://github.com/google/googletest) I used *Google Test* for unit testing.

### Installing

You will need to clone the project directory to your workstation.

```
git clone https://github.com/MarsMSJ/CPP.Samples.git
```

If you want to run the unit test, you'll also need to clone and build the *GoogleTest* source. I highly recommend building the code as library. I created a directory named *library* and built the source to a library. 

First clone the *GoogleTest* repository.
```
git clone https://github.com/google/googletest.git
```

First go to the directory and make a directory called (wait for it) *library.* Go to this directory.

```
cd googletest/googletest
mkdir library
cd library
```

Now build the library

```
g++-7 -isystem ../include -I.. -pthread -c ../src/gtest-all.cc 
ar -rv libgtest.a gtest-all.o
```
Now build the test
```
g++-7 -isystem <MyGoogleTestDirPath>/googletest/googletest/include -pthread Test_RandomBase.cpp Test_StringSample.cpp Test_main.cpp <MyGoogleTestDirPath>/googletest/googletest/library/libgtest.a -o testApp 
```

Run the test.
```
./testApp
```

## Unit Test

The following test are include:

#### RandomBase 
- Test for all functions
#### StringSaple
- Test for all functions

I provided the output of the unit test in the file *testAppOutput.txt.* 


## Deployment
Do as you see fit. :)

## Contributing
Please read [CONTRIBUTING.md](https://gist.github.com/PurpleBooth/b24679402957c63ec426) for details on our code of conduct, and the process for submitting pull requests to us.

### To Do:
* Matrix Samples
* Random char Strings
* Random words,
* Word Shifts 
* Palindromes
* Much more unit test


## Versioning

I use [SemVer](http://semver.org/) for versioning. 

