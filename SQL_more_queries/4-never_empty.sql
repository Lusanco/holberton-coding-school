-- Script that creates the table id_not_null on your MySQL server
-- USE db; # first step select db
CREATE TABLE IF NOT EXISTS id_not_null (
    id INT NOT NULL DEFAULT 1,
    name VARCHAR(256)
);