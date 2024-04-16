#!/usr/bin/python3
"""
0-gather_data_from_an_API.py
holbertonschool-back-end/api
"""

import requests
from sys import argv


def data_from_api(id=None):
    """
    Returns information about TODO list progress,
    for a given employee ID, using REST API.
    """

    if len(argv) > 1:
        try:
            id = int(argv[1])
        except ValueError:
            return

    if isinstance(id, int):
        base_url = "https://jsonplaceholder.typicode.com"
        user_url = requests.get(f"{base_url}/users/{id}").json()
        todo_url = requests.get(f"{base_url}/todos/?userId={id}").json()

        if user_url and todo_url:
            employee_name = user_url["name"]
            total_number_of_tasks = len(todo_url)
            # fmt: off
            done_tasks = [task["title"] for task in todo_url
                          if task["completed"]]
            number_of_done_tasks = len(done_tasks)

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


if __name__ == "__main__":
    data_from_api()
