-- Last updated: 8/2/2026, 12:06:38 AM
# Write your MySQL query statement below
select c.name as Customers 
from Customers c 
left join Orders o 
on c.id = o.customerId
where o.customerId Is null;