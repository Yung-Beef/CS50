import csv

students = []

with open("students.csv") as file:
    reader = csv.reader(file)
    for row in reader:
        students.append({"name": row[0], "home": row[1]})


    # for line in file:
    #     name, home = line.rstrip().split(",")
    #     student = {"name": name, "home": home}
    #     students.append(student)


for student in sorted(students, key=lambda student: student["name"]):
    print(f"{student['name']} is from {student['home']}")