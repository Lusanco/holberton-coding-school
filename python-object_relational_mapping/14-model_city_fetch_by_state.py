#!/usr/bin/python3

"""
Module: Model City Fetch By State
Author: Lusanco
Descri: Script that prints all City
objects from the database hbtn_0e_14_usa
"""


from sys import argv
from model_state import Base, State
from model_city import City
from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker


def main():
    dburl = 'mysql+mysqldb://{}:{}@localhost/{}'
    dburl = dburl.format(
            argv[1],
            argv[2],
            argv[3])
    engine = create_engine(
        dburl,
        pool_pre_ping=True)

    Base.metadata.bind = engine

    Session = sessionmaker(bind=engine)
    session = Session()

    cities = session.query(City, State)
    cities = cities.join(State)
    cities = cities.order_by(City.id).all()

    for city, state in cities:
        print("{}: ({}) {}".format(state.name, city.id, city.name))

    session.close()


if __name__ == "__main__":
    main()
