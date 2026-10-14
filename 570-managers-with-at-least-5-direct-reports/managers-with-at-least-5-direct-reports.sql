select e.name
from employee e
inner join employee f
on e.id = f.managerid
group by f.managerId 
having count(f.managerId)>=5
