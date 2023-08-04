from    pyfiglet    import  Figlet
import  sys
list_f  =   ["-f","--font"]

if  len(sys.argv)   ==  3   and sys.argv[1]in   list_f:
    font    =   sys.argv[2]
    if    font not in  Figlet().getFonts():
        print("font not found")
        sys.exit(1)
else:
    print("Invalid  Usage")
    sys.exit(1)
input   =   input("Input: ")
figlet  =    Figlet(font=font)
figlet_text =   figlet.renderText(input)
print(figlet_text)
