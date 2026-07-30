# C String Programs Collection

A complete set of C programs covering string operations. All 33 programs
have been compiled and tested with GCC (zero errors).

## Basics
- string_length.c
- string_length_without_strlen.c
- reverse_string.c
- string_copy.c
- string_concatenation.c
- concatenate_without_strcat.c
- string_compare.c

## Checks & Validation
- palindrome_check.c
- anagram_check.c
- check_string_rotation.c
- substring_check.c
- pattern_search_naive.c

## Case Conversion
- toggle_case.c
- uppercase_conversion.c
- lowercase_conversion.c

## Counting & Analysis
- count_vowels_consonants.c
- count_words.c
- character_frequency.c
- count_specific_char.c
- count_uppercase_lowercase.c
- longest_word.c

## Modification
- remove_spaces.c
- remove_duplicate_characters.c
- remove_vowels.c
- string_trim.c
- find_replace_character.c
- reverse_words_in_string.c
- string_sorting.c (sorts characters within a string)

## Conversion
- string_to_integer.c (custom atoi)
- integer_to_string.c (custom itoa)

## Multiple Strings / Arrays of Strings
- string_array_sort.c
- longest_common_prefix.c

## Advanced
- string_permutations.c (recursive permutation generation)

## How to Compile & Run
Each file is standalone. Compile with:

    gcc filename.c -o filename
    ./filename

Example:

    gcc palindrome_check.c -o palindrome_check
    ./palindrome_check

Note: most programs use fgets() to read full lines (including spaces),
so simply type your string and press Enter.
