#!/usr/bin/python3

"""
Module: Model State Delete A
Author: Lusanco
Descri: Script that deletes all State
objects with a name containing the letter
'a' from the database hbtn_0e_6_usa
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

    state2del = session.query(State)
    state2del = state2del.filter(State.name.like('%a%'))
    state2del = state2del.all()

    for state in state2del:
        session.delete(state)
    session.commit()

    session.close()


if __name__ == "__main__":
    main()
