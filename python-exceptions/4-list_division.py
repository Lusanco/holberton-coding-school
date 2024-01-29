#!/usr/bin/python3
"""
4. Divide a list
mandatory
Write a function that divides element by element 2 lists.

Prototype: def list_division(my_list_1, my_list_2, list_length):
my_list_1 and my_list_2 can contain any type (integer, string, etc.)
list_length can be bigger than the length of both lists
Returns a new list (length = list_length) with all divisions
If 2 elements can’t be divided, the division result should be equal to 0
If an element is not an integer or float:
print: wrong type
If the division can’t be done (/0):
print: division by 0
If my_list_1 or my_list_2 is too short
print: out of range
You have to use try: / except: / finally:
You are not allowed to import any module

guillaume@ubuntu:~/$ cat 4-main.py
#!/usr/bin/python3
list_division = __import__('4-list_division').list_division

my_l_1 = [10, 8, 4]
my_l_2 = [2, 4, 4]
result = list_division(my_l_1, my_l_2, max(len(my_l_1), len(my_l_2)))
print(result)

print("--")

my_l_1 = [10, 8, 4, 4]
my_l_2 = [2, 0, "H", 2, 7]
result = list_division(my_l_1, my_l_2, max(len(my_l_1), len(my_l_2)))
print(result)

guillaume@ubuntu:~/$ ./4-main.py
[5.0, 2.0, 1.0]
--
division by 0
wrong type
out of range
[5.0, 0, 0, 2.0, 0]
guillaume@ubuntu:~/$
"""


def list_division(my_list_1, my_list_2, list_length):
    result = []
    for i in range(list_length):
        try:
            value_1 = my_list_1[i] if i < len(my_list_1) else 0
            value_2 = my_list_2[i] if i < len(my_list_2) else 0
            if isinstance(value_1, (int, float)) and isinstance(value_2, (int, float)):
                if value_2 != 0:
                    result.append(value_1 / value_2)
                else:
                    print("division by 0")
                    result.append(0)
            else:
                print("wrong type")
                result.append(0)
        except IndexError:
            print("out of range")
            result.append(0)
    return result
