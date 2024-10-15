#!/usr/bin/python3
"""
2-export_to_JSON.py
holbertonschool-back-end/api
"""

import json
import requests
from sys import argv


def export_to_json(id=None):
    """
    using this REST API, for a given employee ID,
    returns information about his/her TODO list progress.
    Extend script to export data in the JSON format.
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
            employee_name = user_url["name"]

            for todo in todo_url:
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

            json_dict = {}
            user_list = []

            for todo in todo_url:
                user_dict = {}
                user_dict.update(
                    {
                        "task": todo["title"],
                        "completed": todo["completed"],
                        "username": user_url["username"],
                    }
                )
                user_list.append(user_dict)

            json_dict[user_url["id"]] = user_list

            with open(f"{user_url['id']}.json", "w") as json_file:
                json.dump(json_dict, json_file)


if __name__ == "__main__":
    export_to_json()
