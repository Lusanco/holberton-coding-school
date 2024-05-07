export default function createEmployeesObject(departmentName, employees) {
  let data = {
    [departmentName]: employees,
  };

  return data;
}
