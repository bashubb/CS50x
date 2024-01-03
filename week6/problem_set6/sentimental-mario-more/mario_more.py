

def main():

    height = get_height()
    for i in range(1,height+1):
        print(f"{(height - i) * ' '}{'#' * i}  {'#'y * i}")

def get_height():
    while True:
        try:
            height = int(input("Height: "))
            if height > 0 and height < 9:
                return height
        except ValueError:
            pass


main()
