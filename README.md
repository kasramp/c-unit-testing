# C unit testing

Example of how to write unit tests in C using [Unity](https://github.com/ThrowTheSwitch/Unity) framework.

## Project structure

There are three important directories: 

- `src` - source code
- `test` - test cases
- `unity` - unity test framework source

The `unity` directory is added as a submodule. Make sure to initialize it after
cloning the project,

```bash
$ git submodule init && git submodule update --recursive
```

The Makefile is the standard Unity make, inspired from [here](http://www.throwtheswitch.org/build/make).

Test file names should start with `Test*` (case sensitive). Each test file should implement the `setUp`,  the`tearDown`, and the `main` functions since this project uses the default Unity test runner.


## How to run

You need to install `make`.

To run tests:

```bash
$ make test
```

To compile the code:

```bash
$ make compile
```

To generate an executable:

```bash
$ make install
```

To run all at once:

```bash
$ make
```

To clean:

```bash
$ make clean
```

To format the code:

```bash
$ make format # follow Linux style
```
