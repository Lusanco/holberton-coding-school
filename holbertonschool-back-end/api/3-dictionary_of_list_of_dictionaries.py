#!/usr/bin/python3
"""
3-dictionary_of_list_of_dictionaries.py
holbertonschool-back-end/api
"""

import json
import requests


def list_of_dictionaries():
    """
    Returns information about TODO list progress,
    for a given employee ID, using REST API.
    Extend script to export data in the JSON format.
    """

    api_users_url = "https://jsonplaceholder.typicode.com/users"
    api_todos_url = "https://jsonplaceholder.typicode.com/todos"

    response = requests.get(api_users_url)
    users = response.json()

    user_ids = []
    for user in users:
        user_ids.append(user["id"])

    json_dict = {}

    for id in user_ids:
        base_url = "https://jsonplaceholder.typicode.com"
        user_url = f"{base_url}/users/{id}"
        todo_url = f"{base_url}/todos/?userId={id}"

        response = requests.get(user_url)
        employee_name = response.json()["username"]
        response = requests.get(todo_url)
        tasks = response.json()

        json_dict[id] = []

        for task in tasks:
            json_format = {
                "username": employee_name,
                "task": task["title"],
                "completed": task["completed"],
            }

            json_dict[id].append(json_format)

    with open("todo_all_employees.json", "w") as json_file:
        json.dump(json_dict, json_file)


if __name__ == "__main__":
    list_of_dictionaries()
