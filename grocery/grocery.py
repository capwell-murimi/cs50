grocery =   {}

while   True:
    try:
        item    =   input().strip().upper()
        if  item    not in  grocery:
            grocery[item]   =   1
        else:
            grocery[item] = grocery[item]  +  1
    except  EOFError:
        sorted_grocery  =   dict(sorted(list(grocery.items())))
        for i    in  sorted_grocery:
            print(sorted_grocery[i], i , sep=" ")
        break
    except  KeyError:
        pass