#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv

    argc = len(argv) - 1
    if argc == 0:
        print(0)
    else:
        num = int(argv[1])
        for _ in range(1, argc):
            num += int(argv[_ + 1])
        print(num)
