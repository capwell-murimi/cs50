answer  =   input("What is the Answer to the Great Question of Life, the Universe, and Everything? ")
answer  =   answer.lower()
answer  =   answer.replace(" " , "")
if answer   ==  "forty-two":
    print("Yes")
elif    answer  ==  '42':
    print("Yes")
elif    answer  ==  "fortytwo":
    print("Yes")
else:
    print("No")
