#set variable for coins put in already
coins = 0

print("Amount due: 50")

while coins != 50:
    deposit = int(input("Insert coin: "))
    if deposit == 5 or 10 or 25:
        coins = coins + deposit
        if coins < 50:
            print(f"Amount due: {50 - coins}")
        if coins > 50:
            print(f"Change owed: {coins - 50}")
    if coins - 50 >= 0:
        break
