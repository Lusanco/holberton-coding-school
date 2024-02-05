#!/usr/bin/python3
"""
0. Simple rectangle
mandatory
Write an empty class Rectangle that defines a rectangle:

You are not allowed to import any module

guillaume@ubuntu:~/$ cat 0-main.py
#!/usr/bin/python3
Rectangle = __import__('0-rectangle').Rectangle

my_rectangle = Rectangle()
print(type(my_rectangle))
print(my_rectangle.__dict__)

guillaume@ubuntu:~/$ ./0-main.py
<class '0-rectangle.Rectangle'>
{}
guillaume@ubuntu:~/$
"""


class Rectangle:
    pass
