#!/usr/bin/python3
"""
0. My first square
mandatory
Write an empty class Square that defines a square:

You are not allowed to import any module
guillaume@ubuntu:~/$ cat 0-main.py

#!/usr/bin/python3
Square = __import__('0-square').Square

my_square = Square()
print(type(my_square))
print(my_square.__dict__)

guillaume@ubuntu:~/$ ./0-main.py
<class '0-square.Square'>
{}
guillaume@ubuntu:~/$
"""

class Square:
    """Defines a Square"""
    pass