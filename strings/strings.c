/*


What is a String?
A string is a collection of characters (letters, numbers, symbols) ending with a null character '\0'.

In C, strings are actually arrays of characters.

Example:

char str[] = "Hello";
Behind the scenes, it's stored like this:


Index	0	1	2	3	4	5
Value	H	e	l	l	o	\0


char name[20];
scanf("%s", name);    // No & needed for strings
Note: scanf reads until it finds a space.
(If you want full sentences, we use gets() or fgets())

Operations on String
? Reading a string
? Printing a string
? Comparing strings
? Copying one string to another
? Finding string length
? Joining two strings
*/