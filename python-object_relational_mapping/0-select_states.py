#!/usr/bin/python3

"""
Module: Select States
Author: Lusanco
Descri: A script that lists all
states from the database hbtn_0e_0_usa.
"""


# Development modules
import MySQLdb
import sys

# Debugging module
from icecream import ic

# if name == main managing
# sys arguments (from terminal)
if __name__ == "__main__":
    username = sys.argv[1]
    password = sys.argv[2]
    database = sys.argv[3]

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
cur.execute("SELECT * FROM states ORDER BY id ASC")

# Fetch all the rows
rows = cur.fetchall()

for row in rows:
    print(row)

# Close connection
cur.close()
db.close()
