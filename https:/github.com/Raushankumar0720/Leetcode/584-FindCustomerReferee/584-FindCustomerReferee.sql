-- Last updated: 8/6/2026, 11:05:40 PM
# Write your MySQL query statement below
select name 
from Customer
where referee_id != 2 or referee_id is null;