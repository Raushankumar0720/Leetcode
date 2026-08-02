-- Last updated: 8/2/2026, 11:25:33 PM
# Write your MySQL query statement below
select e.name as Employee
from Employee e
join Employee m
on e.managerId = m.id
where e.salary > m.salary;