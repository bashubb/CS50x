SELECT AVG(energy) from songs
WHERE artist_id IN
(SELECT id FROM artists  WHERE name = 'Drake');
