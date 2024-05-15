export default function handleResponseFromAPI(promise) {
  if (promise) {
    promise.then(() => {
      console.log('Got a response from the API');
      return { status: 200, body: 'success' };
    });
  } else {
    promise.catch(() => {
      console.log('Got a response from the API');
      return new Error();
    });
  }
}
