-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Find the description of the crime
SELECT description FROM crime_scene_reports
WHERE month = 7 and day = 28 AND street = 'Humphrey Street';

-- Check the transcripts of whitnesses interviews
SELECT transcript, name FROM interviews WHERE month = 7 and day = 28;

-- Find the log from bakery security
SELECT license_plate, activity FROM bakery_security_logs
WHERE year = 2021 and month=7 and day = 28 and hour = 10 and minute BETWEEN 15 and 25;

-- find license_plate person who has been calling after leaving bakery  for less than a minute and his license_plate in the logs 10:15 - 10:25
SELECT * FROM people WHERE phone_number IN
(SELECT caller FROM phone_calls WHERE year = 2021 and month=7 and
day = 28  and duration <= 60) and license_plate IN
(SELECT license_plate FROM bakery_security_logs
WHERE year = 2021 and month = 7 and day = 28 and hour = 10 and minute BETWEEN 15 and 25);

-- find person near ATM this morning and its ID and has been calling after leaving bakery for less than a minute
-- and its on bakery loggs 10:15 - 10:25 (Bruce, Diana)
SELECT * FROM people p JOIN bank_accounts a ON p.id = a.person_id
WHERE a.account_number IN
(SELECT account_number FROM atm_transactions
WHERE year = 2021 and month = 7 and day = 28 and atm_location = 'Leggett Street')
AND p.phone_number IN
(SELECT phone_number FROM people WHERE phone_number IN
(SELECT caller FROM phone_calls WHERE year = 2021 and month=7 and
day = 28  and duration <= 60) and license_plate IN
(SELECT license_plate FROM bakery_security_logs
WHERE year = 2021 and month = 7 and day = 28 and hour = 10 and minute BETWEEN 15 and 25));

-- find fight destination details for passengers which passport number  == person near ATM this morning and its ID who has been calling
-- after leaving bakery for less than a minute
-- and its on bakery loggs 10:15 - 10:25 (Bruce is the thief, earliest flight 8:20)
SELECT * FROM flights f JOIN passengers p ON f.id = p.flight_id
WHERE p.passport_number = 5773159633 OR p.passport_number = 3592750733;

-- find the city (New York)
SELECT city FROM airports WHERE id IN
(SELECT f.destination_airport_id FROM flights f JOIN passengers p ON f.id = p.flight_id
WHERE p.passport_number = 5773159633 OR p.passport_number = 3592750733
AND f.origin_airport_id IN
(SELECT id FROM airports WHERE city = 'Fiftyville'));

-- Find Phone number of Bruce ((367) 555-5533)
SELECT phone_number FROM people
WHERE name = 'Bruce';

-- Check the Phone Call of Bruce to Find Accomplice (Robin)
SELECT people.name FROM people
JOIN phone_calls ON people.phone_number = phone_calls.receiver
WHERE phone_calls.year = 2021 AND phone_calls.month = 7 AND phone_calls.day = 28
AND phone_calls.duration <= 60 AND phone_calls.caller = '(367) 555-5533';
