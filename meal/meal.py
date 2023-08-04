def main():
    time    =   input("What time is it? ")
    time    =   convert(time)

    if  time    >=  7   and  time    <=  8:
        print("breakfast time")
    elif    time    >=  8   and  time    <=  13:
        print("lunch time")
    elif    time    >=  18  and  time    <=  19:
        print("dinner time")
    else:
        return  None


def convert(time):
    hours,minutes    =  time.split(":")
    hours   =   float(hours)
    minutes =   float(minutes)
    minutes =   (minutes *1)/60
    time    =   hours   +   minutes
    return  time

if __name__ == "__main__":
    main()