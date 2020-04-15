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

##  Example of executable shell
```sh
~/simple_shell$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
~/simple_shell$ ./hsh
$ /bin/ls
total 28
AUTHORS  cutline.c  hsh  man_1_simple_shell  MS.h  _putchar.c  _puts.c  README.md  shell.c
```
## What happen when you type ls -la
```sh
$ ls -la
total 28
drwxrwxrwx 1 charogan charogan 4096 Apr 15 19:51 .
drwxrwxrwx 1 charogan charogan 4096 Apr 15 17:38 ..
-rw-rw-rw- 1 charogan charogan  133 Apr 15 17:26 AUTHORS
-rw-rw-rw- 1 charogan charogan  405 Apr 15 18:27 cutline.c
drwxrwxrwx 1 charogan charogan 4096 Apr 15 19:43 .git
-rwxrwxrwx 1 charogan charogan 9384 Apr 15 19:51 hsh
-rw-rw-rw- 1 charogan charogan 1113 Apr 15 15:05 man_1_simple_shell
-rw-rw-rw- 1 charogan charogan  417 Apr  9 12:44 MS.h
-rw-rw-rw- 1 charogan charogan  247 Apr  7 00:39 _putchar.c
-rw-rw-rw- 1 charogan charogan  181 Apr  7 00:47 _puts.c
-rw-rw-rw- 1 charogan charogan 2584 Apr 15 19:43 README.md
-rw-rw-rw- 1 charogan charogan  526 Apr 15 19:21 shell.c
```

## List of functions and system calls
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
