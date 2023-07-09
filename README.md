# Take Aways
Here are my learnings during the 42 Barcelone 3rd July 2023 Piscine

## tar
`tar` manipulates **tape** archives
`tar` creates and manipulates streaming archive files.  This implementation can extract from tar, pax, cpio, **zip, jar, ar, xar, rpm, 7-zip**, and ISO 9660 cdrom images and can create tar, pax, cpio, ar, zip, 7-zip, and shar  archives.
> tar -cf  file.tar filename1 filename2 filename3
-c create
-f file

create a tar file named file.tar from files filename1 filename2 filename3

> tar -xf file.tar

extracts files from tar file to the current directory. **BUT i noticed file permissions are not fully preserved**. The flag -p preserves files permisions as it were at origin.

> tar -pxf file.tar

## dd

In the venerable Unix command dd, the disk/data duplicator (or, sometimes, **disk destroyer**) allows us to copy raw data from one source to another. It's not used to copy individual files like cp. is is a disdestroyer **when you do not know what you are doing**.

> dd if=/dev/zero of=test4 bs=1 count=4

creates a file of 4 bytes. as the input file (if) is /dev/zero, the file is plenty of zeros

> dd if=/dev/urandom of=test4 bs=1 count=2

 creates a file of 2 bytes with random chars.

I do not feel confortable with this solution so i made this

> echo 0000000000000 > source

> head -c1 source > trashme

> ls -l

> -rw-r--r--  1 luicasad  2023_barcelona  1 Jul  3 14:20 trashme

## ln
By default ln makes hard links.  Hard links applies only to files, Hard links may not normally refer to directories and may not span file     systems
-s creates a simbolik link.

ln source _file target_file

## chmod -h
Apply to sinbolic links


## ls
 -F Display a slash ('/') immediately after each pathname that is a directory, an asterisk ('*') after each that is executable, an at sign ('@') after each symbolic link, an equals sign ('=') after each socket, a percent sign (`%') after each whiteout, and a vertical bar ('|') after each that is a FIFO.

 -m Stream output format; list files across the page, separated by commas.
 -p Write a slash ('/') after each filename if that file is a directory.
 -t Sort by time modified (most recently modified first) before sorting the operands by lexicographical order.
 -u Use time of last access, instead of last modification of the file for sorting (-t) or long printing (-l).

 ## git log
 --format=format:"%H"
 --pretty="%H"

## git ls-files
Show information about files in the index and the working tree

`--ignored` , `--cached`,  `--deleted`
`--others` show untracked files
`--exclude-standard` Add standard exclusions .git/info/exclude, .gitignore
## diff & patch

Discover difference between two files with diff, then apply differences wiht patch

### Create the files.
> echo 'luis' > aa

> echo 'luis Miguel' > bb

### Compare them.

> diff -u aa bb > patch.file

### See differences.

> cat patch.file
> 
```
--- aa	2023-07-04 10:21:16.000000000 +0200
+++ bb	2023-07-04 10:21:31.000000000 +0200
@@ -1 +1 @@
-luis
+luis Miguel
```
### Apply changes to aa to make it equal to bb

> patch aa < patch.file

> cat aa
```
luis Miguel
```
### Apply changes to bb to make it equal to aa
> patch bb < path.file

> cat bb
```
luis
```

In the exercise we got two files a and sw.diff. From the command in the picture `diff a b > sw.diff ` i know i can use sw.diff to patch b.

> patch -b a < sw.diff

Flag -b keeps the original as a.origin. Rename a as b . repeat command `diff a b > sw2.diff `. compare two files od differences `diff sw.diff sw2.diff `. You get not difference so b is the solution to submit.


## touch

-t flag customizes access and modification times to the specified time instead of the current time of day
-h is the right flight to change access and modification times for a symbolic link without changing linked file.

## find

rechercher, à partir du répertoire courant et dans tous ses sous-répertoires, **les fichiers** dont le nom se
termine par ~, ou commence et se termine par #.

• La ligne de commande affichera et effacera les fichiers trouvés.

-type f search only regular files.
-name '*~' search file names ending with '~'
-name '#*#' search filenames starting and endiing wiht '#'
-or is a logical operator

\( and \) parentesis must be escaped.

-print prints file names
-delete removes found files
2>/dev/null hides error from permission denied

![interesting find prompts](https://geekflare.com/es/linux-find-commands/)

## magic files

`file` utility compiles a text file i can use to detect the file type of others files.
inside `man magic` i found instructions/commnads to include as rules in such text file

Each rules, with four fields separated by spaces or tabs, follow this template
offset type test message

**offset**  [41]         A number specifying the offset (in bytes) into the file of the data which is to be tested

**type**    [string]     There are 47 types. i selected string as i look for "42" string

**test**    [42]       The value to be compared with the value from the file

**message** [42 file]  The message to be printed if the comparison succeeds

## Environmental versus shell variables

Environmental variables are variables that are defined for the current shell and are **inherited by any child** shells or processes. Environmental variables are used to pass information into processes that are spawned from the shell.

Shell variables are variables that are contained **exclusively within the shell** in which they were set or defined. They are often used to keep track of ephemeral data, like the current working directory.

`printenv` or `env` prints all enviromental variables(26 today). `printenv varname` prints an individual var. 
`env` lets you modify the environment that programs run in by passing a set of variable definitions into a command

> env FT_USER=luicasad ./print_groups.sh

`set` prints all shell variables (155 today). 

### Creating a shell variable
`FT_USER=luicasad` This variable is available in our current session, but **will not be passed down to child processes**. You find it with `env` but not with `printenv`.
`echo $FT_USER` shows variable contents, but ...

> bash
> echo FT_USER

shows nothing, cause `bash` has created a child process.
 ### Creating a environmental variable

 `export FT_USER` turn our shell variable into an environmental variable we can find wiht `printenv`. In case we created a child process we will find it the variable.

 `export FT_NAME='Luis Miguel!'` set environmental variables in a single step. 

 When we create an environmentlal variable in a child process, there isn’t a built-in way of setting environmental variables of the parent shell. This is good in most cases and prevents programs from affecting the operating environment from which they were called.

 ### Demoting and unsetting variables.
 We can change an environmental variable  back into a shell variable by typing `export -n FT_USER`. Now `printenv` does not find iit , but `set` does.

 If we want to completely unset a variable, either shell or environmental, we can do so with `unset FT_USER`

 ### Login, Non-Login, Interactive, and Non-Interactive Shell Sessions.
 Each shell session is classified as either login or non-login and interactive or non-interactive.
 The bash shell reads different configuration files depending on how the session is started.

 **login session** will read:
 - first `/etc/profile`.
 - then login shell configuration file in the user’s home directory. The first file that it can find out of `~/.bash_profile`, `~/.bash_login`, and `~/.profile` and does not read any further files.

**non-login shell** will read: 
- fisrt `/etc/bash.bashrc`
- then the user-specific `~/.bashrc` file to build its environment.

**Non-interactive shells** will read:
- the file specified by environmental variable `BASH_ENV`.

 ### Implementing Environmental Variables.

 Most Linux distributions configure the login session configuration files to source the non-login session configuration files. This means that you can define environmental variables that you want inside the non-login configuration files for both session types.

 This means that the place to define user-specific environmental variables is in the `~/.bashrc` file. A line like `export VARNAME=value` will do he job

 

 If you need to set system-wide variables, you may want to think about adding them to `/etc/profile`, `/etc/bash.bashrc`, or `/etc/environment`.

![source of knowledge](https://www.digitalocean.com/community/tutorials/how-to-read-and-set-environmental-and-shell-variables-on-linux)
## tr -d '\t'
deletes tabular char

## bc 
Is a basic calculator

`bc` accepts command like that `bc <<< '5 +7'` that returns `12`.

bc takes its input and prints its output in decimal. However, you can set either the input or the output to be some other base numbering system - for example, hexadecimal or binary - using the ibase and obase commands.

Setting *only* ibase=16, bc accepts hexadecimal input text to translate to decimal.

Setting *only* obase, bc converts decimal input number to hexadecimal.

Be careful to set *obase* before *ibase*, when converting between not decimal bases 

## sed
to insert something at line start `sed 's/^/init_tag/'`
## norminette
 python3 -m pip install --upgrade pip setuptools
 python3 -m pip install norminette
 The script norminette is installed in '/Users/xxxxxx/Library/Python/3.11/bin' which is not on PATH
 Consider adding this directory to PATH
 > vim .zprofile
 > PATH=/Users/xxxxxx/Library/Python/3.11/bin:$PAT


![Zsh customization](https://ohmyz.sh/#install)
# C
## Fucntion Prototyping versus funcion declarations
A function in C is a block of code that performs a specific task and function Prototype in C is the most important feature of C language that tells the compiler about the function return type, several parameters it accepts, the data type of parameters to avoid any warning and errors.
In C language programs are compiled line by line and if we call a function before we have defined it in the program , we will get some warning like

```
[Warning] conflicting types for 'function' previous implicit declaration of 'function' was here.
```

So to avoid this we declare function prototypes at the start of our programs and may define the functions later on. 
 > source ~/.zprofile
![gcc how to ](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html)
# git

![git reference](https://git-scm.com/doc) 
