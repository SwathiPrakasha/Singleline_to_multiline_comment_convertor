# Singleline_to_multiline_comment_convertor
Occasionally, one runs across sytems (both software and hardware) that can understand block-style comments but cannot not deal with line-style comments
This program converts the singleline comments in the file to multiline comments. 


Block-style comments are any text beginning with /* and ending with */ possibly many lines later.
Line-style comments are any text beginning with // and going through the end of the line.

The program takes two command line arguments, the first being the name of the input file,
and the second being the name of the output file. If the program does not receive the proper number of arguments,
it should print out an informative message about how to use the program and exit.

