import   csv
names   =   []
with    open("practice.csv" ,   "r")    as  csv_file:
    csv_reader  =   csv.DictReader(csv_file)

    with    open("store.csv"    ,   "w")    as  csv_storefile:
        fieldnames  =   ['Identifier','First name']
        csv_writer  =   csv.DictWriter(csv_storefile, fieldnames=fieldnames,    delimiter='\t')

        csv_writer.writeheader()
        for line  in    csv_reader:
            del line['Last name']
            csv_writer.writerow(line)
            names.append(f"{line['First name']}")
for name    in  names:
    print(name)
