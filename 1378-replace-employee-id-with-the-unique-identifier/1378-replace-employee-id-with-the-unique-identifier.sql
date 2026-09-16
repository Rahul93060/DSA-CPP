# Write your MySQL query statement below
select e.unique_id , ei.name from Employees ei left join EmployeeUNI e ON ei.id = e.id;