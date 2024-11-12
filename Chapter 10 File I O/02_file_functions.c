/*
fopen ()	 fopen () function creates a new file or opens an existing file.
fclose ()	 fclose () function closes an opened file.
fwrite()     writes specified bytes of data to the binary file.
fgets()      to take input whole line from file.
fread()      reads a specified bytes of data froma binary file.
getw ()	     getw () function reads an integer from file.
putw ()	     putw () functions writes an integer to file.
fgetc ()	 fgetc () function reads a character from file.
fputc ()	 fputc () functions write a character to file.
gets ()	     gets () function reads line from keyboard.
puts ()	     puts () function writes line to o/p screen.
fgets ()	 fgets () function reads string from a file, one line at a time.
fputs ()	 fputs () function writes string to a file,and newline at the end.
fgetchar ()  fgetchar () function reads a character from keyboard.
fprintf ()	 fprintf () function writes formatted data to a file.
fscanf ()	 fscanf () function reads formatted data from a file.
fputchar ()	 fputchar () function writes a character onto the output screen from keyboard input.      
fseek ()	 fseek () function moves file pointer position to given location.
SEEK_SET	 SEEK_SET moves file pointer position to the beginning of the file.
SEEK_CUR	 SEEK_CUR moves file pointer position to given location.
SEEK_END	 SEEK_END moves file pointer position to the end of file.
ftell ()	 ftell () function gives current position of file pointer.
rewind ()	 rewind () function moves file pointer position to the beginning of the file.
getc ()	     getc () function reads single character from file.
getch ()	 getch () function reads character from keyboard.
getche ()	 getche () function reads character from keyboard and echoes to o/p screen.
getchar ()	 getchar () function reads character from keyboard.
putc ()	     putc () function writes a character to file.
putchar ()	 putchar () function writes a character to screen.
printf ()	 printf () function writes formatted data to screen.
sprinf ()	 sprinf () function writes formatted output to string.
scanf ()	 scanf () function reads formatted data from keyboard.
sscanf ()	 sscanf () function Reads formatted input from a string.
remove ()	 remove () function deletes a file.
rename()     renames the file.
fflush ()	 fflush () function flushes a file.
exit(0)      successful execution of file.
exit(1)      failure for execution of file.
fefo()       The feof function is used to check whether the end of a file has been reached during file reading operations. 
ferror()
EOF          eof is returned by a ptr pointing to a file when the end of file is reached.

opening modes:
r -   searches for file if opened successfully fopen() loads it into memory 
      and sets up a pointer that points to the character in the file
      , if the file cannot be opened or does not exist fopen() returns null.
    
rb -  same as r but opens the file for reading in binary.

w -   open for writing in text mode , if exists its content is overwritten
      if file doesnt exists it is created ,
      returns null if file cannot be opened.

wb -  same as w but opens file for writing in binary.

a -   searches for file if opened successfully fopen() loads it into memory
      and sets up a pointer that points to the last character in the file
      if file doesnt exist the file is created ,
      returns null if file cannot be opened.

ab -  same as ab but opens the file for append in binary mode,
      data is added to the end of the file and
      if file doesnt exists it is created.

r+ -  same as r.

rb+ - open for both reading and writing in binary 
      , if doesnt exists returns null.

w+ -  same a w.

wb+ - open for both reading and writing in binary ,
      if exists its content is overwritten
      if file doesnt exists it is created ,
      returns null if file cannot be opened.

a+ -  searches for file if opened successfully fopen() loads it into memory
      and sets up a pointer that points to the last character in the file
      ,it opens file for both reading and append ,
      if file doesnt exist the file is created ,
      returns null if file cannot be opened.

ab+ - it opens file for both reading and append in binary  ,
      if file doesnt exist the file is created .
*/ 
#include <stdio.h>
int main(){
    char letters;
    FILE*ptr=fopen("02_file_functions.txt","r");
    FILE*ptr1=fopen("02_file_functions.txt","a");
    while(1){
    letters = fgetc(ptr);
    printf("%c",letters);
    if (letters == EOF){
        break;
    }
    else{
        fputc(letters,ptr1);
    }
    }
}