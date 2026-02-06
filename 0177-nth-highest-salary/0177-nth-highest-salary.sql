CREATE FUNCTION getNthHighestSalary(N IN NUMBER) RETURN NUMBER IS
result NUMBER;
BEGIN
    /* Write your PL/SQL query statement below */
    WITH cte AS 
    (SELECT DISTINCT salary, DENSE_RANK() OVER(ORDER BY salary DESC) AS rank FROM Employee)
    SELECT salary INTO result FROM cte WHERE rank = N;
    RETURN result;
END;