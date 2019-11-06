def convertToNotation(number):
    notations = ["B","KB", "MB", "GB"]
    numSize = 0
    done = False
    while not done:
        if number >= 1024:
            number = number / 1024
            numSize += 1
        else:
            remainder = number % 1024
            done = True
            string = str(number)+ " " + notations[numSize]
            print(f"number: {number}, numSize: {numSize}, string: {string}" )
print("5")
convertToNotation(2**25)