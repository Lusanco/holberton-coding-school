const express = require('express');

const app = express();

// Define the route for the root URL ('/')
app.get('/', (req, res) => {
  res.send('Hello Holberton School!');
});

// Start the server and listen on port 1245
const port = 1245;
app.listen(port, () => {
  console.log(`Server is listening on port ${port}`);
});

// Export the app variable
module.exports = app;
