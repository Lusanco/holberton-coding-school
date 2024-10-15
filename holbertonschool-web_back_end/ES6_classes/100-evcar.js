import Car from './10-car';

export default class EVCar extends Car {
  constructor(brand, motor, color, range) {
    super(brand, motor, color);
    this._range = range;
  }

  //   cloneCar() {
  //     const clone = new super.constructor();
  //     return clone;
  //   }
  /* eslint-disable class-methods-use-this */
  cloneCar() {
    return new Car();
  }
  /* eslint-enable class-methods-use-this */
}
