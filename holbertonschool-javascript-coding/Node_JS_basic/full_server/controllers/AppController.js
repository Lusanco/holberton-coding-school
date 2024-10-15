class AppController {
  // Define the getHomepage function
  static getHomepage(request, response) {
    // Send the response
    response.send(200, 'Hello Holberton School!');
  }
}

// Export the AppController class
export default AppController;
