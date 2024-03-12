#!/usr/bin/python3

"""
Module: Model State Filter A
Author: Lusanco
Descri: Script that lists all State
objects that contain the letter 'a'
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

    new_state = State(name="Louisiana")
    session.add(new_state)
    session.commit()

    print(new_state.id)

    session.close()


if __name__ == "__main__":
    main()
