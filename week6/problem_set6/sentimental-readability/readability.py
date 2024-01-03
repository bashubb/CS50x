def main():
    text = input("Text: ")

    index = calculate_coleman(
        count_letters(text), count_words(text), count_sentences(text)
    )

    if index > 16:
        print("Grade 16+")
    elif index < 1:
        print("Before Grade 1")
    else:
        print("Grade", index)


def count_letters(text):
    letters = 0
    for letter in text:
        if letter.isalpha():
            letters += 1

    return letters


def count_words(text):
    words = 0

    for i in range(len(text)):
        if i == 0:
            continue
        elif text[i - 1].isalpha() and text[i].isspace():
            words += 1
        elif text[i] in [".", "!", "?", ","] and text[i - 1].isalpha():
            words += 1

    return words


def count_sentences(text):
    sentences = 0

    for i in range(len(text)):
        if i == 0:
            continue
        elif text[i] in [".", "!", "?"] and text[i - 1].isalpha():
            sentences += 1

    return sentences


def calculate_coleman(letters, words, sentences):
    index = (
        0.0588 * (float(letters) / words * 100)
        - 0.296 * (float(sentences) / words * 100)
        - 15.8
    )

    return round(index)


if __name__ == "__main__":
    main()

