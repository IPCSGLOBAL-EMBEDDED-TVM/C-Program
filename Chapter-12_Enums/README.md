# Author: Adhith D John (Rth- Embedded, Kerala)
# contact: adhith@ipcsglobal.com
# C Enum Programs Collection

A complete set of C programs covering the `enum` keyword and its uses.
All 27 programs have been compiled and tested with GCC (zero errors).

## Basics
- enum_basics.c
- enum_default_values.c (sequential values starting from 0)
- enum_custom_values.c (assigning specific values)
- enum_partial_custom_values.c (mixing default and custom values)
- enum_typedef.c
- enum_sizeof.c (underlying storage size)
- anonymous_enum.c (constants without a named type)
- enum_scope.c (global vs function-local enums)

## Control Flow & Functions
- enum_switch_case.c
- enum_in_function.c (pass/return enum values)
- enum_comparison.c (relational operators on enums)
- enum_arithmetic.c (incrementing enum values)
- enum_iteration.c (looping through all enum values)

## Enums with Arrays & Strings
- enum_array.c
- enum_to_string.c (mapping enum -> display name)
- string_to_enum.c (mapping user input -> enum)

## Bit Flags
- enum_bit_flags.c (powers-of-two flags combined with | and &)

## Real-World Style Applications
- enum_days_of_week.c
- enum_months.c (days-in-month with leap year check)
- enum_traffic_light.c (state cycling simulation)
- enum_state_machine.c (event-driven state transitions)
- enum_boolean_simulation.c (pre-C99 style boolean via enum)
- enum_error_codes.c (error code + message lookup)
- enum_menu_driven.c (menu option handling)
- enum_direction.c (turn left/right navigation)
- enum_card_suits.c (playing card suits and ranks)
- enum_negative_values.c (enum with negative/mixed values)

## How to Compile & Run
Each file is standalone. Compile with:

    gcc filename.c -o filename
    ./filename

Example:

    gcc enum_traffic_light.c -o enum_traffic_light
    ./enum_traffic_light

Note: in C (unlike C++), enum variables behave like plain integers, so
they support arithmetic, comparison, and increment operators directly —
several programs (enum_arithmetic.c, enum_iteration.c, enum_direction.c)
demonstrate this.
