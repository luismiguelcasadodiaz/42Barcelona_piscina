# 42Barcelona_piscina
Here are my learnings during the 42 Barcelone 3rd July 2023 Piscine

## tar
tar manipulates **tape** archives
tar creates and manipulates streaming archive files.  This implementation can extract from tar, pax, cpio, **zip, jar, ar, xar, rpm, 7-zip**, and ISO 9660 cdrom images and can create tar, pax, cpio, ar, zip, 7-zip, and shar  archives.
> tar -cf  file.tar filename1 filename2 filename3
-c create
-f file

create a tar file named file.tar from files filename1 filename2 filename3

> tar -xf file.tar

extracts files from tar file to the current directory. **BUT i noticed file permissions are not fuly preservedd**. The flag -p preserves files permisions as it were at origin.

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
by default ln makes hard links.  Hard links applies only to files, Hard links may not normally refer to directories and may not span file     systems
-s creates a simbolik link.

ln source _file target_file

## chmod -h
Apply to sinbolic links


## ls
 -F Display a slash (`/') immediately after each pathname that is a directory, an asterisk (`*') after each that is executable, an at             sign (`@') after each symbolic link, an equals sign (`=') after each socket, a percent sign (`%') after each whiteout, and a vertical bar (`|') after each that is a FIFO.

 -m Stream output format; list files across the page, separated by commas.
 -p Write a slash (`/') after each filename if that file is a directory.
 -t Sort by time modified (most recently modified first) before sorting the operands by lexicographical order.
 -u Use time of last access, instead of last modification of the file for sorting (-t) or long printing (-l).

 ## git log
 --format=format:"%H"  
