# !/usr/bin/python3
"""
1-export_to_CSV.py
holbertonschool_backend/api
"""

import requests
import sys
import csv


def export_to_csv():
    """Export data to CSV file"""

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

    rows = []
    for task in tasks:
        row = employee_id, employee_name, task["completed"], task["title"]
        rows.append(row)

    with open("{}.csv".format(employee_id), "w", newline="") as file:
        writer = csv.writer(file, quoting=csv.QUOTE_ALL)
        writer.writerows(rows)


if __name__ == "__main__":
    export_to_csv()
