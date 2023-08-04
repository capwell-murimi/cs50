def main():
    text    =   input()
    converted   =   convert(text)
    print(converted)

def convert(text):
    for i   in  text:
        if  ":)"    in  text:
            text    =   text.replace(":)", "🙂")
        elif    ":("    in  text:
            text    =   text.replace(":(", "🙁")
    return text

main()