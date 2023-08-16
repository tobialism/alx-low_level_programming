#!/bin/bash
# Description: Compile and run 104-fibonacci.c from header file

# Constants
CC="gcc"
CFLAGS="-Wall -Werror -Wextra -pedantic"
OUTPUT_EXEC="fib"
HEADER_FILE="104-header.h"
SOURCE_FILE="104-fibonacci.c"

# Copy header into source file
echo "#include<stdio.h>" > $SOURCE_FILE
cat $HEADER_FILE >> $SOURCE_FILE

# Compile
$CC $CFLAGS $SOURCE_FILE -o $OUTPUT_EXEC

if [ $? -ne 0 ]; then
    echo "Error compiling $SOURCE_FILE" 
    exit 1
fi

# Run
./$OUTPUT_EXEC 

if [ $? -ne 0 ]; then
    echo "Error executing ./$OUTPUT_EXEC"
    exit 2
fi

# Clean up
rm $SOURCE_FILE $OUTPUT_EXEC

exit 0
