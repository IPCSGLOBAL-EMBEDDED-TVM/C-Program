# C Pointer Programs Collection

A complete set of C programs covering pointer concepts. All 32 programs
have been compiled and tested with GCC (zero errors).

## Basics
- pointer_basics.c
- null_pointer.c
- sizeof_pointer.c
- pointer_comparison.c
- pointer_increment_decrement.c
- pointer_arithmetic.c

## Multi-level Pointers
- pointer_to_pointer.c
- pointer_to_pointer_to_pointer.c

## Pointers & Arrays
- array_using_pointer.c
- pointer_vs_array.c
- pointer_array.c (array of pointers to separate variables)
- array_of_pointers_to_strings.c
- pointer_to_2d_array.c

## Pointers & Functions
- swap_using_pointers.c
- pass_by_reference.c
- return_pointer_from_function.c
- pointer_to_function.c
- function_pointer_array.c
- callback_function_pointer.c

## Pointers & Structures
- pointer_to_struct.c
- pointer_to_array_of_struct.c
- self_referential_structure.c
- linked_list_using_pointer.c

## Dynamic Memory Allocation
- dynamic_memory_malloc.c
- dynamic_memory_calloc.c
- dynamic_memory_realloc.c
- dynamic_array_using_pointer.c
- dynamic_2d_array.c

## Pointers & Strings
- pointer_to_string.c
- string_manipulation_using_pointers.c (custom strlen/strcpy/reverse)

## Special Pointer Types
- void_pointer.c
- const_pointer.c (pointer to const, const pointer, const pointer to const)

## How to Compile & Run
Each file is standalone. Compile with:

    gcc filename.c -o filename
    ./filename

Example:

    gcc linked_list_using_pointer.c -o linked_list_using_pointer
    ./linked_list_using_pointer

Note: programs using malloc/calloc/realloc call free() before exiting,
so they can be checked cleanly with tools like valgrind if desired.
