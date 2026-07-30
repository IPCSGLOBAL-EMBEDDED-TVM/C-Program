# Author: Adhith D John (Rth- Embedded, Kerala)
# contact: adhith@ipcsglobal.com
# C Union Programs Collection

A complete set of C programs covering the `union` keyword and its uses.
All 23 programs have been compiled and tested with GCC (zero errors).

## Basics
- union_basics.c
- union_size.c (size equals the largest member)
- union_initialization.c (first-member vs designated initializers)
- union_typedef.c
- union_array.c
- union_with_pointer.c
- union_comparison_note.c (why unions can't use `==`, using memcmp instead)

## Unions & Functions
- union_passing_to_function.c (pass by value)
- union_returning_from_function.c

## Unions Combined with Other Types
- union_with_structure.c (struct holding a tagged union)
- tagged_union.c (enum tag + union of struct variants, shape areas)
- union_nested.c (union containing a struct, reused as another type)
- union_bit_fields.c (union of raw byte + bit-field struct view)
- union_multiple_types.c (short/int/long/float/double sharing storage)

## Low-Level / Memory Techniques
- union_type_punning.c (viewing a float's raw bit pattern)
- union_endianness_check.c (detecting system byte order)
- union_memory_overlap_demo.c (how writes to one member affect others)

## Variant / Tagged-Value Patterns
- union_variant_data_type.c (generic Variant type: int/float/string/bool)
- union_json_like_value.c (JSON-like value: null/bool/number/string)
- union_calculator.c (token stream: numbers and operators)

## Real-World Style Applications
- union_ipv4_address.c (IP address as 32-bit value or 4 octets)
- union_color_representation.c (RGBA color as packed int or channel bytes)
- union_packet_parsing.c (network packet header: raw bytes vs named fields)

## How to Compile & Run
Each file is standalone. Compile with:

    gcc filename.c -o filename
    ./filename

Example:

    gcc union_endianness_check.c -o union_endianness_check
    ./union_endianness_check

Note: some programs (endianness check, type punning, IP/color/packet
examples) print results that depend on your system's byte order or
exact type sizes — that's expected and part of what they demonstrate.
