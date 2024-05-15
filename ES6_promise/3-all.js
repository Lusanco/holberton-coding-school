import { uploadPhoto, createUser } from './utils';

// uploadPhoto returns a
// response with the format
// {
//   status: 200,
//   body: 'photo-profile-1',
// }

// createUser returns a
// response with the format
// {
//   firstName: 'Guillaume',
//   lastName: 'Salva',
// }

export default async function handleProfileSignup() {
  try {
    const [photoUrl, user] = await Promise.all([uploadPhoto(), createUser()]);
    console.log(`${photoUrl.body} ${user.firstName} ${user.lastName}`);
  } catch (error) {
    console.error('Signup system offline');
  }
}
