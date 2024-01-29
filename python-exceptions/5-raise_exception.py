#!/usr/bin/python3
"""
5. Raise exception
mandatory
Write a function that raises a type exception.

Prototype: def raise_exception():
You are not allowed to import any module

guillaume@ubuntu:~/$ cat 5-main.py
#!/usr/bin/python3
raise_exception = __import__('5-raise_exception').raise_exception

try:
    raise_exception()
except TypeError as te:
    print("Exception raised")

guillaume@ubuntu:~/$ ./5-main.py
Exception raised
guillaume@ubuntu:~/$ 
"""
