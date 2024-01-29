#!/usr/bin/python3
"""
6. Print sorted dictionary
mandatory
Write a function that prints a dictionary by ordered keys.

Prototype: def print_sorted_dictionary(a_dictionary):
You can assume that all keys are strings
Keys should be sorted by alphabetic order
Only sort keys of the first level
(dont sort keys of a dictionary
inside the main dictionary)
Dictionary values can have any type
You are not allowed to import any module

guillaume@ubuntu:~/$ cat 6-main.py
#!/usr/bin/python3
print_sorted_dictionary =
__import__('6-print_sorted_dictionary').print_sorted_dictionary

a_dictionary = { 'language': "C",
'Number': 89, 'track': "Low level", 'ids': [1, 2, 3] }
print_sorted_dictionary(a_dictionary)

guillaume@ubuntu:~/$ ./6-main.py
Number: 89
ids: [1, 2, 3]
language: C
track: Low level
guillaume@ubuntu:~/$
"""


def print_sorted_dictionary(a_dictionary):
    sort_dict = sorted(a_dictionary)
    for key in sort_dict:
        print("{}: {}".format(key, a_dictionary[key]))
