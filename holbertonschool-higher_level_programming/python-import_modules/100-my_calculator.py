#!/usr/bin/python3
if __name__ == "__main__":
    from calculator_1 import add, sub, mul, div
    from sys import argv

    argc = len(argv) - 1

    def operator_exit():
        print("Unknown operator. Available operators: +, -, * and /")
        exit(1)

    if argc != 3:
        print("Usage: {} <a> <operator> <b>".format(argv[0]))
        exit(1)

    a = int(argv[1])
    b = int(argv[3])

    if argv[2] == "+":
        result = add(a, b)
    elif argv[2] == "-":
        result = sub(a, b)
    elif argv[2] == "*":
        result = mul(a, b)
    elif argv[2] == "/":
        result = div(a, b)
    else:
        operator_exit()
    print("{} {} {} = {}".format(a, argv[2], b, result))
