#!/usr/bin/python3

"""
Module: Model City
Author: Lusanco
Descri: Definition of the City class
"""

from sqlalchemy import Column, Integer, String, ForeignKey
from model_state import Base, State


class City(Base):
    """
    City class inherits Base

    Attributes:
        id (int): Unique identifier
        (for the city, primary key)
        name (str): Name of the city
        (max length of 128 characters)
        state_id (int): Foreign key
        referencing the state_id
        in the states table
    """

    __tablename__ = 'cities'

    id = Column(
        Integer,
        primary_key=True,
        nullable=False,
        autoincrement=True)

    name = Column(
        String(128),
        nullable=False)

    state_id = Column(
        Integer,
        ForeignKey('states.id'),
        nullable=False)
