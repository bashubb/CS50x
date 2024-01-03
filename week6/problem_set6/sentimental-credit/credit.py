# TODO


def main():

    card_number = input("Number: ")
    is_valid = validate(card_number)
    if is_valid and (card_number[:2] == "34" or card_number[:2] == "37") and len(card_number) == 15:
        print("AMEX")
    elif is_valid and card_number[0] == "4" and (len(card_number) == 13 or len(card_number) == 16):
        print("VISA")
    elif is_valid and (int(card_number[:2]) in range(51,56)) and len(card_number) == 16:
        print("MASTERCARD")
    else:
        print("INVALID")





def validate(card_number):
    reversed_card_number = card_number[::-1]

    to_multiple_and_add = []
    just_add = []
    for index, number in enumerate(reversed_card_number):
        if index != 0 and index % 2 != 0:
            to_multiple_and_add.append(number)
        else:
            just_add.append(number)

    sum_to_multiple_and_add = 0
    for number in to_multiple_and_add:
        number_to_append = (int(number)*2)
        if number_to_append > 9:
            number_to_append = str(number_to_append)
            sum_to_multiple_and_add +=(int(number_to_append[0]))
            sum_to_multiple_and_add +=(int(number_to_append[1]))
        else:
            sum_to_multiple_and_add += number_to_append

    sum_just_add = 0
    for number in  just_add:
        sum_just_add += int(number)

    total = sum_to_multiple_and_add + sum_just_add

    if str(total)[1] == "0":
        return True
    return False


if __name__ == "__main__":
    main()

