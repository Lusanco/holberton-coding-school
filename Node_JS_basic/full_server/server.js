import express from 'express';
import controllerRouting from './routes/index';

// Set the app variable to the express function
const app = express();

// Call the controllerRouting function with the app as an arg
controllerRouting(app);
// Set server's port
app.listen(1245, () => {
  // Log the server's port
  console.log('Server is listening on port 1245');
});

// Export the app
export default app;
