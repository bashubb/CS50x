SELECT name FROM songs
WHERE artist_id IN
(SELECT id from artists WHERE name = 'Post Malone');
