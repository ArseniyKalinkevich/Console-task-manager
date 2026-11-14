print("задание 1")

spisok = ["хлеб", "молоко", "яйца"]

spisok.append("сыр")
spisok.insert(0, "вода")
spisok.remove("молоко")

print(spisok)
print(len(spisok))


("задание 2")

spisok1 = [5, 4, 3, 5, 5, 4, 2]
total = 0

for mark in spisok1:
    total += mark

count = len(spisok1)
avarage = total / count if count  > 0 else 0

print("сумма оценок", total)
print("средний балл", avarage)



print("задание 3")

spisok2 = [17, -4, 32, 8, 32, 0, 15]
