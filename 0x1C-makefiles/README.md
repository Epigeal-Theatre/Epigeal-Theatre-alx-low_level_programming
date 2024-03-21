This is my readme file for my project 0x1C-makefiles
IN THIS PROJECT WE LEARN
1.what are makefiles
2.why use makefiles
3.how to use makefiles
4.readmefile tries to summarise all the above, number (1,2,3)

#make files are basically a file containing instructions of what you want to happen.
#...OF COURSE THERE IS A LIMIT AS TO WHAT YOU WANT TO HAPPEN.



#GENERAL LAYOUT OF MAKE FILE
TPR>>>>>TARGET, PREREQUISITE,RECIPE

TARGET IS THE OUTCOME YOU WANT TO ACHIEVE
PREREQUISITE ARE THE FILES YOU WANT TO WORK ON
RECIPE IS THE PROCEDURE OF MANIPULATION(INSTRUCTIONS)


#EXAMPLE.
If i want to compile a file named gallagher.c, by default this file is the //prerequisite//
the outcome after compilation will be a file named gallagher.0. so this is the //target//
the command instruction i will use to achieve this is gcc -c this is the //recipe//


#FORMATION(INVERTED UPSIDE DOWN CAPITAL LETTER L GOING BY (TPR) )
TARGET: PREREQUISITE
	RECIPE


#PRACTICAL EXAMPLE
//EXAMPLE STARTS HERE//
# Example Makefile

# Target executable
output: main.o file1.o file2.o
    gcc -o output main.o file1.o file2.o

# Compile main.c
main.o: main.c
    gcc -c main.c

# Compile file1.c
file1.o: file1.c
    gcc -c file1.c

# Compile file2.c
file2.o: file2.c
    gcc -c file2.c

# Clean generated files
clean:
    rm -f output *.o

//EXAMPLE ENDS HERE//


#ADDITIONAL RESOURCE

Basic Commands:
make: Runs make using the default Makefile in the current directory.
make target: Builds the specified target.
make -f filename: Specifies a Makefile other than the default Makefile.
make clean: Cleans up generated files (useful for removing compiled binaries and object files).


Advanced Features:
Variables: Define variables to make the Makefile more flexible.
Pattern Rules: Generic rules that match multiple targets and prerequisites.
Phony Targets: Targets that don't represent actual files but serve as commands.
Automatic Variables: Special variables available during the execution of recipes.
Conditional Statements: Use ifeq, ifdef, etc., for conditional execution.


Tips:
Use comments to document your Makefile for clarity.
Keep your Makefile organized and modular.
Utilize pattern rules and variables to avoid repetition.
Understand dependencies accurately to prevent unnecessary recompilation.


Further Resources:
GNU Make documentation: https://www.gnu.org/software/make/manual/make.html
Tutorialspoint Makefile Tutorial: https://www.tutorialspoint.com/makefile/index.htm
"Managing Projects with GNU Make" by Robert Mecklenburg.
