# shell

In the computer science world, however, a shell is a software program that interprets commands from the user so that the operating system can understand them and perform the appropriate functions. The shell is a command-line interface, which means it is soley text-based.

  - Type <command> | <option> ... 
  - comfortable to use
  - text-based

# Great !

                                                          shell Types
  - Bourne shell ( sh)
  - Korn shell ( ksh)
  - Bourne Again shell ( bash)
  - POSIX shell ( sh)

## What is $ in Shell?

> For shells supporting this shell variable "$?" contains the return code of a command executed most recently. ... It is general practice that when a program or script executes without error it returns a value of 0 to indicate that it has finished with no errors. Not all programs and scripts do, but they should.

### Tech

Shell uses a number of open source projects to work properly:

* [c] - Programming language!
* [man-page] - awesome man page
* [simple-shell] - building a simple-shell.
* [hsh] - executable file
* [commands] - use input commands
* And of course simple-shell itself is a [public repository] on GitHub.

### List of functions and system calls
```sh
> access (man 2 access)
> chdir (man 2 chdir)
> close (man 2 close)
> closedir (man 3 closedir)
> execve (man 2 execve)
> exit (man 3 exit)
> _exit (man 2 _exit)
> fflush (man 3 fflush)
> fork (man 2 fork)
> free (man 3 free)
> getcwd (man 3 getcwd)
> getline (man 3 getline)
> isatty (man 3 isatty)
> kill (man 2 kill)
> malloc (man 3 malloc)
> open (man 2 open)
> opendir (man 3 opendir)
> perror (man 3 perror)
> read (man 2 read)
> readdir (man 3 readdir)
> signal (man 2 signal)
> stat (__xstat) (man 2 stat)
> lstat (__lxstat) (man 2 lstat)
> fstat (__fxstat) (man 2 fstat)
> strtok (man 3 strtok)
> wait (man 2 wait)
> waitpid (man 2 waitpid)
> wait3 (man 2 wait3)
> wait4 (man 2 wait4)
> write (man 2 write)
```

### Git

git clone git@github.com:saidskander/simple_shell.git

```sh
> gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

### files

Dillinger is currently extended with the following plugins. Instructions on how to use them in your own application are linked below.

| Plugin | README |
| ------ | ------ |
| AUTHORS | containing the contributing authors |
| MS.h | Header file |
| _putchar.c | putchar function |
| _puts.c | _puts.c function |
| cutline.c | cutline function |
| man_1_simple_shell | our man page |



### AUTHORS
AUTHORS
Said Skander Amireche
Mohamed Chaaben

### Bugs
None bugs found

License
----
**Free :D**
