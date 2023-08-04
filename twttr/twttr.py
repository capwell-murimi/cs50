vowels  =   ['a','e','i','o','u']
word    =   input("Input: ")
for char    in  word:
    if  char.lower()    in  vowels:
        word    =   word.replace(char,"")
print(f"Output: {word}")