# !/usr/bin/python3
"""
0-gather_data_from_an_API.py
holbertonschool_backend/api
"""

import requests
import sys


# def data_from_api():
#     """Gather data from an API by input ID"""

#     employee_id = int(sys.argv[1])

#     base_url = "https://jsonplaceholder.typicode.com"
#     # fmt: off
#     user_url = "{}/users/{}".format(
#         base_url, employee_id)
#     todo_url = "{}/todos?userId={}".format(
#         base_url, employee_id)
#     # fmt: on

#     user_res = requests.get(user_url)
#     todo_res = requests.get(todo_url)

#     employee_name = user_res.json()["name"]
#     tasks = todo_res.json()
#     total_tasks = len(tasks)

#     done_tasks = []
#     for task in tasks:
#         if task["completed"]:
#             done_tasks.append(task)

#     num_done_tasks = len(done_tasks)

#     print(
#         "Employee {} is done with tasks({}/{}):".format(
#             employee_name, num_done_tasks, total_tasks
#         )
#     )

#     for task in done_tasks:
#         print(f"\t {task['title']}")


# if __name__ == "__main__":
#     data_from_api()


#!/usr/bin/python3
"""
    Api REST
"""


import json
import requests
from sys import argv


def get_employee(id=None):
    """
    using this REST API, for a given employee ID,
    returns information about his/her TODO list progress.
    """
    # check if argv[1] is a number int, it means we are using argv
    if len(argv) > 1:
        try:
            id = int(argv[1])
        except ValueError:
            pass
            return

    if isinstance(id, int):
        user = requests.get(f"https://jsonplaceholder.typicode.com/users/{id}")
        to_dos = requests.get(
            f"https://jsonplaceholder.typicode.com/todos/?userId={id}"
        )

        if to_dos.status_code == 200 and user.status_code == 200:
            user = json.loads(user.text)
            to_dos = json.loads(to_dos.text)

            total_tasks = len(to_dos)
            tasks_completed = 0
            titles_completed = []

            for to_do in to_dos:
                if to_do["completed"] is True:
                    tasks_completed += 1
                    titles_completed.append(to_do["title"])

            tasks_completed = len(titles_completed)

            print(
                f"Employee {user['name']} is done with tasks\
                  ({tasks_completed}/{total_tasks})"
            )
            for title in titles_completed:
                print(f"\t {title}")


if __name__ == "__main__":
    get_employee()
