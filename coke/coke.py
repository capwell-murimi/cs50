coke_price  =   50
total_coins   =   0
coins   =   [25,10,5]
while   coke_price  >  0:
    print(f"Amount Due: {coke_price}")
    coin   =   int(input("Insert Coin: "))
    if  coin   in  coins:
        coke_price   =  coke_price  -   coin
        total_coins =   total_coins +   coin

if  total_coins >=  coke_price:
    print(f"Change Owed: {total_coins - 50}")
