def main():
    dollars = dollars_to_float(input("How much was the meal? "))
    percent = percent_to_float(input("What percentage would you like to tip? "))
    tip = dollars * percent
    print(f"Leave ${tip:.2f}")

# function   to  convert dollar  to  float


def dollars_to_float(d):
    return float(d[1:])

# convert    percent to  float


def percent_to_float(p):
    # TODO
    new_percent = float(p.strip("%"))/100
    return new_percent


main()