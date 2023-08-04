answer =    input("Input: ")
answer  =   answer.lower()
answer  =   answer.strip()

if  answer  ==  "hello" or  answer.startswith("hello"):
    print("$0")
elif answer.startswith("h"):
    print("$20")
else:
    print("$100")