-- Last updated: 8/2/2026, 12:06:42 AM
# Write your MySQL query statement below
select max(salary) as SecondHighestSalary
from Employee
where salary < (select max(salary) from Employee)

