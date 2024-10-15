#!/usr/bin/python3
"""
1-export_to_CSV.py
holbertonschool-back-end/api
"""

import csv
import json
import requests
from sys import argv


def export_to_csv(id=None):
    """
    Returns information about TODO list progress,
    for a given employee ID, using REST API.
    Extend script to export data in the CSV format.
    """

    if len(argv) > 1:
        try:
            id = int(argv[1])
        except ValueError:
            return

    if isinstance(id, int):
        base_url = "https://jsonplaceholder.typicode.com"
        user_url = requests.get(f"{base_url}/users/{id}")
        todo_url = requests.get(f"{base_url}/todos/?userId={id}")

        if user_url.status_code == 200 and todo_url.status_code == 200:
            user_url = json.loads(user_url.text)
            todo_url = json.loads(todo_url.text)
            total_number_of_tasks = len(todo_url)
            number_of_done_tasks = 0
            done_tasks = []
            csv_rows = []
            user_id = id
            employee_name = user_url["name"]

            for todo in todo_url:
                csv_rows.append(
                    [
                        user_id,
                        user_url["username"],
                        todo["completed"],
                        todo["title"],
                    ]
                )
                if todo["completed"] is True:
                    number_of_done_tasks += 1
                    done_tasks.append(todo["title"])

            number_of_done_tasks = len(done_tasks)

            # fmt: off
            print(
                "Employee {} is done with tasks({}/{}):".format(
                    employee_name,
                    number_of_done_tasks,
                    total_number_of_tasks
                )
            )
            # fmt: on

            for task in done_tasks:
                print(f"\t {task}")

            with open(f"{user_id}.csv", "w", newline="") as csv_file:
                writer = csv.writer(csv_file, quoting=csv.QUOTE_ALL)
                writer.writerows(csv_rows)


if __name__ == "__main__":
    export_to_csv()
