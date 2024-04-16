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


if __name__ == "__main__":
    employee_id = int(sys.argv[1])

    base_url = "https://jsonplaceholder.typicode.com"
    # fmt: off
    user_url = "{}/users/{}".format(
        base_url, employee_id)
    todo_url = "{}/todos?userId={}".format(
        base_url, employee_id)
    # fmt: on

    user_res = requests.get(user_url)
    todo_res = requests.get(todo_url)

    employee_name = user_res.json()["name"]
    tasks = todo_res.json()
    total_tasks = len(tasks)

    done_tasks = []
    for task in tasks:
        if task["completed"]:
            done_tasks.append(task)

    num_done_tasks = len(done_tasks)

    print(
        "Employee {} is done with tasks({}/{}):".format(
            employee_name, num_done_tasks, total_tasks
        )
    )

    for task in done_tasks:
        print(f"\t {task['title']}")
