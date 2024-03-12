#!/usr/bin/python3

"""
Module: Model State My Get
Author: Lusanco
Descri: Script that prints the State
object with the name passed as argument
from the database hbtn_0e_6_usa
"""


from sys import argv
from model_state import Base, State
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

    state_name = argv[4]
    state = session.query(State)
    state = state.filter(State.name == state_name)
    state = state.first()

    if state:
        print(state.id)
    else:
        print("Not found")

    session.close()


if __name__ == "__main__":
    main()
