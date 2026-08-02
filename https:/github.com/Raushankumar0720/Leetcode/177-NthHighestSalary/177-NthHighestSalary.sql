-- Last updated: 8/2/2026, 11:25:38 PM
CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
set N = N-1;
  RETURN (
      # Write your MySQL query statement below.
        select distinct salary
        from Employee
        order by salary desc
        limit 1
        offset N
  );
END