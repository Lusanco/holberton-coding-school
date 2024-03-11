#!/usr/bin/python3
#!/usr/bin/python3

"""
Module: Filter States
Author: Lusanco
Descri: A script that lists all
states with a name starting with
N (upper N) from the database
hbtn_0e_0_usa.
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

    # Connect to the server (MySQL)
    db = MySQLdb.connect(
        host="localhost",
        port=3306,
        user=username,
        passwd=password,
        db=database)

    # Create a cursor object
    cur = db.cursor()

    # Run the SQL statement
    cur.execute("SELECT * FROM states WHERE name LIKE BINARY 'N%'")

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
