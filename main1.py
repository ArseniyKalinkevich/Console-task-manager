min_number = int(input("введите нижнюю границу: "))
max_number = int(input("введите верхнюю границу: "))
x = int(input("Искомое число: "))

if(min_number > max_number): #объявление ошибки, если нижняя граница будет больше верхней
    print("error")
    exit()
    
    

while(min_number <= max_number):#основная функция
    mid = (min_number + max_number) // 2
    print("середина", mid)

    if mid == x:
        print(f'наше число {mid}')
        break

    elif x < mid:
        max_number = mid - 1

    else:
        min_number = mid + 1

else:
    print("число не найдено")

