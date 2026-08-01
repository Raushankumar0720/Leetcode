-- Last updated: 8/2/2026, 12:06:41 AM
# Write your MySQL query statement below
select email as Email
from Person
group by email
having count(email) > 1; 