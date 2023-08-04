def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")


def is_valid(s):
    if   len(s) <   2   or  len(s)  >   6:
        return   False
    elif   not    s.iesalnum():
            return  False
    elif    s.isalpha():
        return  True
    else:
        if  s[:2].isalpha() and   s[-2:].isdigit():
            for char  in  range(len(s)):
                if  s[char].isdigit():
                    if  s[char].startswith('0')    or  s[char:].isalpha():
                        return  False
                    else:
                        return  True
        else:
            return  False
    return  True
main()
