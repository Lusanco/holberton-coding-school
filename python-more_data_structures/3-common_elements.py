#!/usr/bin/python3
"""
3. Present in both
mandatory
Write a function that returns a set of common
elements in two sets.

Prototype: def common_elements(set_1, set_2):
You are not allowed to import any module

guillaume@ubuntu:~/$ cat 3-main.py
#!/usr/bin/python3
common_elements =
__import__('3-common_elements').common_elements

set_1 = { "Python", "C", "Javascript" }
set_2 = { "Bash", "C", "Ruby", "Perl" }
c_set = common_elements(set_1, set_2)
print(sorted(list(c_set)))

guillaume@ubuntu:~/$ ./3-main.py
['C']
guillaume@ubuntu:~/$
"""


def common_elements(set_1, set_2):
    new_set = set_1.intersection(set_2)
    return new_set
