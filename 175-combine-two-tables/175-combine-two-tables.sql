/* Write your T-SQL query statement below */
-- # Write your MySQL query statement below
Select Person.firstName, Person.lastName, Address.city, Address.state from
Person LEFT JOIN Address ON Person.personId = Address.personId;