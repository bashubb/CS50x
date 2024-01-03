import csv
import sys


def main():

    # TODO: Check for command-line usage
    if len(sys.argv) != 3:
        print("Error, wrong usage of command-line-arguments")
        sys.exit()

    # TODO: Read database file into a variable
    data = []
    with open(sys.argv[1]) as data_base:
        reader = csv.DictReader(data_base)
        for row in reader:
            person = {
                "name": row.get("name", 0),
                "AGATC": row.get("AGATC", 0),
                "TTTTTTCT": row.get("TTTTTTCT", 0),
                "AATG": row.get("AATG", 0),
                "TCTAG": row.get("TCTAG", 0),
                "GATA": row.get("GATA", 0),
                "TATC": row.get("TATC", 0),
                "GAAA": row.get("GAAA", 0),
                "TCTG": row.get("TCTG", 0)
                }
            data.append(person)


    # TODO: Read DNA sequence file into a variable
    with open(sys.argv[2]) as dna:
        for row in csv.reader(dna):
            dna_sequence = row[0]


    # TODO: Find longest match of each STR in DNA sequence
    count_longest = {}
    for str in data[0]:
        if str == "name":
            continue
        longest =  longest_match(dna_sequence, str)
        count_longest[str] = longest

    # TODO: Check database for matching profiles
    for person in data:
        person_no_0_values = {}
        for item in person:
            if person[item] != 0:
                person_no_0_values[item] = person[item]

        count_match = 0
        for person_str in person_no_0_values:
            for str in count_longest:
                if person_str == str and int(person_no_0_values[person_str]) == count_longest[str]:
                    count_match += 1


        if count_match == len(person_no_0_values)-1:
            print(person["name"])
            return
    print("No match")
    return


def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


main()

