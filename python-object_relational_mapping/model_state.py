#!/usr/bin/python3

"""
Module: Model State
Author: Lusanco
Descri: Define the State class
that inherits from Base.
"""


from sqlalchemy import Column, Integer, String
from sqlalchemy.ext.declarative import declarative_base

Base = declarative_base()


class State(Base):
    """
    State class inherits Base

    Attributes:
        id (int): Unique identifier
        (for the state, primary key)
        name (str): Name of the state
        (max length of 128 characters)
    """

    __tablename__ = 'states'

    id = Column(
        Integer,
        primary_key=True,
        nullable=False,
        autoincrement=True)

    name = Column(
        String(128),
        nullable=False)