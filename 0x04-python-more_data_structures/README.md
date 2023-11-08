# 0x04. Python - More Data Structures: Set, Dictionary

This project includes Python scripts that cover various tasks related to sets and dictionaries. These tasks are part of the ALX Higher-Level Programming curriculum.

## Table of Contents
* [Files](#files)
* [Description](#description)
* [Tasks](#tasks)
  * [0. Squared simple](#0-squared-simple)
  * [1. Search and replace](#1-search-and-replace)
  * [2. Unique addition](#2-unique-addition)
  * [3. Present in both](#3-present-in-both)
  * [4. Only differents](#4-only-differents)
  * [5. Number of keys](#5-number-of-keys)
  * [6. Print sorted dictionary](#6-print-sorted-dictionary)
  * [7. Update dictionary](#7-update-dictionary)
  * [8. Simple delete by key](#8-simple-delete-by-key)
  * [9. Multiply by 2](#9-multiply-by-2)
  * [10. Best score](#10-best-score)
  * [11. Multiply by using map](#11-multiply-by-using-map)
  * [12. Roman to Integer](#12-roman-to-integer)

## Files
* `0-square_matrix_simple.py`
* `1-search_replace.py`
* `2-uniq_add.py`
* `3-common_elements.py`
* `4-only_diff_elements.py`
* `5-number_keys.py`
* `6-print_sorted_dictionary.py`
* `7-update_dictionary.py`
* `8-simple_delete.py`
* `9-multiply_by_2.py`
* `10-best_score.py`
* `11-multiply_list_map.py`
* `12-roman_to_int.py`

## Description

This project contains Python scripts that perform various operations on sets, dictionaries, and lists. Each script focuses on a specific task and demonstrates the use of Python data structures and functions.

## Tasks

### 0. Squared simple

A function that computes the square value of all integers in a matrix.

Prototype: `def square_matrix_simple(matrix=[]):`
- `matrix` is a 2-dimensional array
- Returns a new matrix:
  - Same size as `matrix`
  - Each value should be the square of the value of the input
- The initial matrix should not be modified

### 1. Search and replace

A function that replaces all occurrences of an element with another in a new list.

Prototype: `def search_replace(my_list, search, replace):`
- `my_list` is the initial list
- `search` is the element to replace in the list
- `replace` is the new element

### 2. Unique addition

A function that adds all unique integers in a list (only once for each integer).

Prototype: `def uniq_add(my_list=[]):`
- `my_list` is the input list
- Returns the sum of all unique integers in the list

### 3. Present in both

A function that returns a set of common elements in two sets.

Prototype: `def common_elements(set_1, set_2):`
- `set_1` and `set_2` are two sets
- Returns a new set containing common elements found in both input sets

### 4. Only differents

A function that returns a set of all elements present in only one set.

Prototype: `def only_diff_elements(set_1, set_2):`
- `set_1` and `set_2` are two sets
- Returns a new set containing elements present in only one of the input sets

### 5. Number of keys

A function that returns the number of keys in a dictionary.

Prototype: `def number_keys(a_dictionary):`
- `a_dictionary` is a dictionary
- Returns the number of keys in the dictionary

### 6. Print sorted dictionary

A function that prints a dictionary by ordered keys.

Prototype: `def print_sorted_dictionary(a_dictionary):`
- `a_dictionary` is a dictionary with string keys
- Prints the dictionary keys sorted in alphabetical order (values are not sorted)

### 7. Update dictionary

A function that replaces or adds key/value pairs in a dictionary.

Prototype: `def update_dictionary(a_dictionary, key, value):`
- `a_dictionary` is the input dictionary
- `key` is the key to be added or updated
- `value` is the value associated with the key
- If the key exists in the dictionary, the value is replaced; if it doesn't exist, a new key/value pair is added

### 8. Simple delete by key

A function that deletes a key in a dictionary.

Prototype: `def simple_delete(a_dictionary, key=""):`
- `a_dictionary` is the input dictionary
- `key` is the key to be deleted
- If the key exists in the dictionary, it is removed

### 9. Multiply by 2

A function that returns a new dictionary with all values multiplied by 2.

Prototype: `def multiply_by
