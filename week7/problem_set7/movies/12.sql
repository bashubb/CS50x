SELECT m.title
FROM movies m
JOIN stars s1 ON m.id = s1.movie_id
JOIN people p1 ON p1.id = s1.person_id AND p1.name = 'Bradley Cooper'
JOIN stars s2 ON m.id = s2.movie_id
JOIN people p2 ON p2.id = s2.person_id AND p2.name = 'Jennifer Lawrence';
