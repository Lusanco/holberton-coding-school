const fs = require('fs');

const countStudents = (filePath) => {
  try {
    const data = fs.readFileSync(filePath, 'utf8');
    const lines = data.trim().split('\n');
    const students = lines.slice(1).filter((line) => line.trim() !== '');

    console.log(`Number of students: ${students.length}`);

    const fields = {};
    students.forEach((student) => {
      const [firstName, , , field] = student.split(',');
      if (fields[field]) {
        fields[field].count += 1;
        fields[field].students.push(firstName);
      } else {
        fields[field] = {
          count: 1,
          students: [firstName],
        };
      }
    });

    Object.entries(fields).forEach(([field, { count, students }]) => {
      console.log(
        `Number of students in ${field}: ${count}. List: ${students.join(', ')}`,
      );
    });
  } catch (err) {
    throw new Error('Cannot load the database');
  }
};

module.exports = countStudents;
