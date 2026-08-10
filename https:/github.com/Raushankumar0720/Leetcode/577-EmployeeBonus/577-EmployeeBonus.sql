-- Last updated: 8/10/2026, 1:50:25 PM
# Write your MySQL query statement below
SELECT e.name, b.bonus
FROM Employee e
LEFT JOIN Bonus b
ON e.empId = b.empId
WHERE b.bonus IS NULL OR b.bonus < 1000;
