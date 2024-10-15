#!/usr/bin/python3

"""
Module: Model State Update ID 2
Author: Lusanco
Descri: Script that changes the
name of a State object from the
database hbtn_0e_6_usa
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

    state = session.query(State)
    state = state.filter(State.id == 2)
    state = state.first()

    if state:
        state.name = "New Mexico"
        session.commit()

    session.close()


if __name__ == "__main__":
    main()
