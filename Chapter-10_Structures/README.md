#Author : Adhith D John, RTH - Embedded (Kerala) 
# C Structure Programs Collection

A complete set of C programs covering structures (and related concepts:
unions, enums, bit-fields). All 30 programs have been compiled and tested
with GCC (zero errors).

## Basics
- structure_basics.c
- structure_initialization.c (3 ways to initialize a structure)
- nested_structures.c (structure within a structure)
- structure_copy.c (direct assignment copies members)
- structure_comparison.c (why == doesn't work, member-wise compare)
- typedef_structure.c

## Structures & Pointers
- structure_with_pointer.c

## Structures & Functions
- passing_structure_to_function.c (pass by value)
- passing_structure_pointer_to_function.c (pass by reference)
- returning_structure_from_function.c

## Structures & Arrays
- array_of_structures.c
- structure_with_array_member.c
- structure_with_string_array.c
- dynamic_array_of_structures.c (malloc'd array of structs)
- sort_array_of_structures.c (bubble sort by a struct field)
- structure_array_search.c (linear search by name)

## Memory Layout
- structure_size_padding.c (member order affects padding/size)
- bit_fields.c (packing small values into bits)

## Unions & Enums
- union_basics.c
- union_vs_structure.c (side-by-side size/behavior comparison)
- enum_with_structure.c
- anonymous_structure.c (anonymous nested struct members)

## Real-World Style Applications
- complex_number_structure.c (complex number math)
- date_structure.c (date validation with leap year check)
- student_record_system.c
- employee_management.c (salary calculation)
- book_inventory_system.c

## Structures as Building Blocks (Data Structures)
- linked_list_structure.c (insert at end, delete by value)
- stack_using_structure.c (array-based stack)
- queue_using_structure.c (array-based queue)

## How to Compile & Run
Each file is standalone. Compile with:

    gcc filename.c -o filename
    ./filename

Example:

    gcc student_record_system.c -o student_record_system
    ./student_record_system

Note: programs reading names/text mix scanf() and fgets(); an extra
getchar() clears the leftover newline from the input buffer between them.
