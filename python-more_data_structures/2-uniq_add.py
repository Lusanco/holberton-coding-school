#!/usr/bin/python3
"""
2. Unique addition
mandatory
Write a function that adds all unique
integers in a list (only once for each
integer).

Prototype: def uniq_add(my_list=[]):
You are not allowed to import any module

guillaume@ubuntu:~/$ cat 2-main.py
#!/usr/bin/python3
uniq_add = __import__('2-uniq_add').uniq_add

my_list = [1, 2, 3, 1, 4, 2, 5]
result = uniq_add(my_list)
print("Result: {:d}".format(result))

guillaume@ubuntu:~/$ ./2-main.py
Result: 15
guillaume@ubuntu:~/$
"""


def uniq_add(my_list=[]):
    uniq_set = set()
    for _ in my_list:
        uniq_set.add(_)
    add = sum(uniq_set)
    return add
