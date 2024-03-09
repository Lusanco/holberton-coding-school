-- Script that creates the table unique_id on your MySQL server
-- USE db; # first step select db
CREATE TABLE IF NOT EXISTS unique_id (
    id INT NOT NULL DEFAULT 1 UNIQUE,
    name VARCHAR(256)
);