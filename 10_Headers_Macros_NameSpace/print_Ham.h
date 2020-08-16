
#ifndef PRINT_HAM_H // #ifndef =  START HEADER GUARD
#define PRINT_HAM_H // #define = Definition of Macro
namespace ham { //Namespace of ham
	namespace sandwich {
		void print_Ham(); //Definition of function / Function Prototype
	}
}


#endif // #endif = END HEADER GUARD

/*
Header Guards:

- Tell compiler to only compile code once

// #ifndef MACRO = if macro not defined
// #define MACRO = create new macro

// #endif = end if statement / header guard

- #pragma once is a very non-standard way of setting up header guards

- If you DO NOT add Header Guards the program won't compile correctly or add unnecesscary files

- SF.2: May not contain object (class) definitions or non-inline function definitions

- SF.4: Include .h files before other declarations in file

- SF.7: Don't put "using" directives in a header file

- SF.8: use #include Guards for ALL .h files (aka Header Guards)


*/

/*
Macro:

- Macros are constants

- Similar to vars, but CANNOT be changed

- Recommend ONLY using for Header Guards

- Enum.1: Prefer enumerations over macros

- ES.32: use ALL_CAPS for all macro names

#define PROG_VERSION1.1
#define PI3.14159
#define HAM

*/

/*
Namespace:

- Namespace provides scope to identifiers (either vars, classes, functions, etc. that we create)

- Prevents compiler errors from multiple same-name functions, classes, etc.

- We've been using standard namespace with 'std::cout' and 'std::cin'

- No namespace = Global namespace

- SF.20: Use namespaces to express logical structure

*/

/*
Using:

- Use 'using' carefully/sparringly

- Convert a specific namespace to a global namespace within it's block of code

- Could be only within function or entire file if used at top

- Using 'using' multiple times defeats purpose of namespace and code calrity

using namespace std;
using namespace ham;

*/

/*
Nesting & Aliases"

- Nest multiple namespaces within one another for more specificty

- Create an alias of multiple namespaces to reduce typing

*/