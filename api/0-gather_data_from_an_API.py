# !/usr/bin/python3
"""
0-gather_data_from_an_API.py
holbertonschool_backend/api
"""

import requests
import sys


def get_employee_todos(employee_id):
    """
    Retrieves employee information and their TODO list progress
    from the jsonplaceholder API.

    Args:
        employee_id (int): The ID of the employee.

    Returns:
        dict: A dictionary containing the employee's name,
              the number of completed tasks,
              the total number of tasks, and
              the titles of the completed tasks.
    """

    base_url = "https://jsonplaceholder.typicode.com/"
    employee_url = f"{base_url}users/{employee_id}"
    todos_url = f"{base_url}todos?userId={employee_id}"

    employee_response = requests.get(employee_url)
    todos_response = requests.get(todos_url)

    emp_res = employee_response.status_code
    tdo_res = todos_response.status_code
    if emp_res == 200 and tdo_res == 200:
        employee_info = employee_response.json()
        todos = todos_response.json()
        completed_tasks = [task for task in todos if task["completed"]]
        tasks_completed = len(completed_tasks)
        total_tasks = len(todos)
        employee_name = employee_info["name"]
        completed_task_titles = [task["title"] for task in completed_tasks]

        return {
            "employee_name": employee_name,
            "tasks_completed": tasks_completed,
            "total_tasks": total_tasks,
            "completed_task_titles": completed_task_titles,
        }
    else:
        return None


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python3 script.py <employee_id>")
        sys.exit(1)

    try:
        employee_id = int(sys.argv[1])
    except ValueError:
        print("Employee ID must be an integer")
        sys.exit(1)

    employee_todos = get_employee_todos(employee_id)

    if employee_todos:
        print(
            "Employee {} is done with tasks({}/{})".format(
                employee_todos["employee_name"],
                employee_todos["tasks_completed"],
                employee_todos["total_tasks"],
            )
        )
        for title in employee_todos["completed_task_titles"]:
            print(f"\t {title}")
    else:
        print(f"Employee with ID {employee_id} not found")
