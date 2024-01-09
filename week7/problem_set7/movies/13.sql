SELECT DISTINCT p.name
FROM people p
JOIN stars s ON p.id = s.person_id
JOIN movies m ON m.id = s.movie_id
JOIN stars s_kevin ON s_kevin.movie_id = m.id
JOIN people p_kevin ON p_kevin.id = s_kevin.person_id
WHERE p_kevin.name = 'Kevin Bacon' AND p_kevin.birth = 1958
    AND p.name != 'Kevin Bacon';
