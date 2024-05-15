import signUpUser from './4-user-promise';
import uploadPhoto from './5-photo-reject';

export default function handleProfileSignup(firstName, lastName, fileName) {
  return Promise.all([signUpUser(firstName, lastName), uploadPhoto(fileName)])
    .then(([user, uploadResult]) => [
      { status: 'success', value: user },
      { status: 'success', value: uploadResult },
    ])
    .catch((error) => [
      { status: 'failed', value: error },
      { status: 'failed', value: error },
    ]);
}
