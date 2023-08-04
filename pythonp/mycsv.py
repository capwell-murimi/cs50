import csv

fieldnames = ["name", "number"]
with open("phonebook.csv", "a") as  file:

    writer = csv.DictWriter(file, fieldnames=fieldnames)

    name = input("Name: ")
    number = input("Number: ")

    writer.writerow({"name": name, "number": number})