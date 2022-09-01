from random import randint


def main():
    print(" Добро пожаловать в игру 'Отгадай число'!")
    random_number = randint(1, 10)
    score = 0
    i = 0
    while i < 5:
        while True:
            try:
                user_number = int(input("Введите числов диапазоне [0:10]"))
                if 0 <= user_number <= 10:
                    break
                else:
                    print("Число должно находиться в диапазоне [0:10}!")
            except ValueError:
                print("Несоответствие типов!")
        if i == 4:
            print("Вы проиграли")
            score = score + 1
        elif user_number == random_number:
            print("Да, вы угадали!")
            break
        elif user_number < random_number:
            print( "Введенное число меньше загаданного, берите выше!")
            score = score + 1
        elif user_number > random_number:
            print("Введенное число болше загаданного, берите ниже!")
            score = score + 1
        i = i + 1
    print("Вы сделали " + str(score) + " попыток(-ку) из пяти.")


main()