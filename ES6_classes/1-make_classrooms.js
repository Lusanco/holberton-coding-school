import Classroom from './0-classroom';

export default function initializeRooms() {
  const classroom1 = new Classroom(19);
  const classroom2 = new Classroom(20);
  const classroom3 = new Classroom(34);
  return [classroom1, classroom2, classroom3];
}
