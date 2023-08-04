people  =   {
    "capwell":  "0742145734",
    "edward":   "0721576351",
    "purity": "0727838171",
    "Bill": "0708223454"
}

name    =   input("Name: ")

if  name    in  people:
    print(f"Number: {people[name]}")

else:
    print("Number not found")