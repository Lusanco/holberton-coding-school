const fs = require('fs').promises;

const countStudents = (filePath) => new Promise((resolve, reject) => {
  fs.readFile(filePath, 'utf8')
    .then((data) => {
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
          `Number of students in ${field}: ${count}. List: ${students.join(
            ', ',
          )}`,
        );
      });

      resolve();
    })
    .catch((err) => {
      if (err.code === 'ENOENT') {
        reject(new Error('Cannot load the database'));
      } else {
        reject(err);
      }
    });
});

module.exports = countStudents;
