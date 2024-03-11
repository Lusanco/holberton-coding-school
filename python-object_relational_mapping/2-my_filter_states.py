#!/usr/bin/python3

"""
Module: My Filter States
Author: Lusanco
Descri: A script that takes in an argument
and displays all values in the states table of
hbtn_0e_0_usa where name matches the argument.
"""


# Development modules
import MySQLdb
from sys import argv

# Debugging module
# (comment after use)
# from icecream import ic


def main():
    """Main Program"""

    # varibale arguments
    username = argv[1]
    password = argv[2]
    database = argv[3]
    state = argv[4]

    # Connect to the server (MySQL)
    db = MySQLdb.connect(
        host="localhost",
        port=3306,
        user=username,
        passwd=password,
        db=database)

    # Create a cursor object
    cur = db.cursor()

    # Query Variable
    statement = "SELECT * FROM states WHERE name LIKE '{}'"
    statement = statement.format(state)

    # Run the SQL statement
    cur.execute(statement)

    # Fetch all the rows
    rows = cur.fetchall()

    for row in rows:
        print(row)

    # Close connection
    cur.close()
    db.close()


# Prevents execution when imported
if __name__ == "__main__":
    main()
