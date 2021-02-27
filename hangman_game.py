import random

name = input("Numele tau e: ")

print("Mult noroc ! ", name)


words = ['clasa', 'papagal', 'calculator', 'programare',
         'sala', 'plictisit', 'maiteyi', 'coordonare',
         'casa', 'colorat', 'carcasa', 'gaura']


word = random.choice(words)


print("Incepe jocul!")

guesses = ''

turns = 10


while turns > 0:

    fail = 0

    for char in word:
        if char in guesses:
            print(char)
        else:
            print("__")
            fail += 1

    if fail == 0:
        print("Ai castigat!")

        print("Cuvantul este: ", word)
        break

    guess = input("ghiceste un caracter:")

    guesses += guess

    if guess not in word:

        turns -= 1

        print("Gresit")

        print("Mai ai", + turns, 'incercari')
        if turns == 9:
            print(" ||")
            print(" ||")
            print(" ||")
            print(" ||")
            print(" ||")
            print(" ||")
            print(" ||")
            print("====")

        if turns == 8:
            print(" ||------|")
            print(" ||      |")
            print(" ||")
            print(" ||")
            print(" ||")
            print(" ||")
            print(" ||")
            print("====")

        if turns == 7:
            print(" ||------|")
            print(" ||      |")
            print(" ||     [ ]")
            print(" ||")
            print(" ||")
            print(" ||")
            print(" ||")
            print("====")

        if turns == 6:
            print(" ||------|")
            print(" ||      |")
            print(" ||     [ ]")
            print(" ||      |")
            print(" ||")
            print(" ||")
            print(" ||")
            print("====")

        if turns == 5:
            print(" ||------|")
            print(" ||      |")
            print(" ||     [ ]")
            print(" ||      |")
            print(" ||      |")
            print(" ||      |")
            print(" ||")
            print(" ||")
            print(" ||")
            print("====")
        
        if turns == 4:
            print(" ||------| ")
            print(" ||      | ")
            print(" ||     [ ] ")
            print(" ||     /|\ ")
            print(" ||    / | \ ")
            print(" ||      | ")
            print(" ||")
            print(" ||")
            print(" ||")
            print("====")

        if turns == 3:
            print(" ||------| ")
            print(" ||      | ")
            print(" ||     [ ] ")
            print(" ||     /|\ ")
            print(" ||    / | \ ")
            print(" ||      |   ")
            print(" ||     / \ ")
            print(" ||")
            print(" ||")
            print("====")
        
        if turns == 2:
            print(" ||------| ")
            print(" ||      | ")
            print(" ||     [ ] ")
            print(" ||     /|\ ")
            print(" ||    / | \ ")
            print(" ||      |   ")
            print(" ||     / \ ")
            print(" ||    /   \ ")
            print(" ||")
            print("====")

        if turns == 1:
            print(" ||------| ")
            print(" ||      | ")
            print(" ||     [ ] ")
            print(" ||     /|\ ")
            print(" ||    / | \ ")
            print(" ||      |   ")
            print(" ||     / \ ")
            print(" ||    /   \ ")
            print(" ||   /     \ ")
            print("====")


        if turns == 0:
            print(" ||------| ")
            print(" ||      | ")
            print(" ||    [x x] ")
            print(" ||     /|\ ")
            print(" ||    / | \ ")
            print(" ||      |   ")
            print(" ||     / \ ")
            print(" ||    /   \ ")
            print(" ||   /     \ ")
            print("====")

            print("Ai pierdut!")

