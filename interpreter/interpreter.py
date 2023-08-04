expression  =   input("Expression: ")
a,b,c  =   expression.split()
a   =   float(a)
c   =   float(c)
if  b   ==  "+":
    result  =   a   +   c

elif    b   ==  "*":
    result  =   a   *  c

elif    b   ==  "-":
    result  =   a   -   c

elif    b   ==  "/":
    result  =   a   /   c

print(result)