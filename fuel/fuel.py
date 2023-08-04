def main():
    answer  =   get_answer()
    if    answer  >=  0.0   and  answer  <=  0.1:
        print("E")
    elif    answer  >=  0.9    and  answer  <=  1.0:
        print("F")
    else:
        answer  =   round(answer*100)
        answer  =   str(answer)  +   '%'
        print(answer)
def get_answer():
    while   True:
        try:
            fraction    =   input("Fraction: ")
            numerator   ,   denominator =   fraction.split("/")
            numerator   =   int(numerator)
            denominator =   int(denominator)
            answer  =       float(numerator/denominator)
            if  answer  >   1:
                fraction    =   input("Fraction: ")
            return  answer
        except(ValueError,   ZeroDivisionError):
            pass
main()
'''Run your program with python fuel.py. Type 4/4 and press Enter. Your program should output:
F
Run your program with python fuel.py. Type 0/4 and press Enter. Your program should output:
E
Run your program with python fuel.py. Type 4/0 and press Enter. Your program should handle a ZeroDivisionError and prompt the user again.
Run your program with python fuel.py. Type three/four and press Enter. Your program should handle a ValueError and prompt the user again.
Run your program with python fuel.py. Type 1.5/3 and press Enter. Your program should handle a ValueError and prompt the user again.
Run your program with python fuel.py. Type 5/4 and press Enter. Your program should prompt the user again.'''