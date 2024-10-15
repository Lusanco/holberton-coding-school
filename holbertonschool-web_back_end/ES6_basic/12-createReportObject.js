/**
 * This function takes an object representing a report structure and processes it
 * to create a new report object with additional properties and methods.
 *
 * @param {Object} employeesList - An object where keys are department names (strings)
 *                                 and values are arrays of employee names (strings).
 * @returns {Object} - A new report object with the following properties:
 *                      - allEmployees: An object containing department names as keys
 *                                       and corresponding employee lists as values.
 *                      - getNumberOfDepartments: A method that returns the number of departments.
 */
export default function createReportObject(employeesList) {
  // Create an empty object to store all employees grouped by department
  const allEmployees = {};

  // Loop through each department and its employees in the provided employeesList
  for (const [departmentName, employeeList] of Object.entries(employeesList)) {
    // Destructure the key-value pair from the employeesList object
    //  - departmentName: The name of the department (string)
    //  - employeeList: An array containing employee names (strings)

    // Add the department and its employee list to the allEmployees object
    //  using departmentName as the key and employeeList as the value
    allEmployees[departmentName] = employeeList;
  }

  // Return a new object containing the processed data and the method
  return {
    allEmployees, // The object containing all employees grouped by department
    getNumberOfDepartments() {
      // Method to return the number of departments
      //  - Uses Object.keys(employeesList).length to get the key count
      return Object.keys(employeesList).length;
    },
  };
}
