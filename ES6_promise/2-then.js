export default function handleResponseFromAPI(promise) {
  if (!promise) {
    throw new Error('Invalid promise provided'); // Handle missing promise
  }

  return promise
    .then(() => {
      console.log('Got a response from the API');
      return { status: 200, body: 'success' }; // Return success object
    })
    .catch(() => {
      console.log('Got a response from the API');
      return new Error(); // Return empty error object
    });
}
