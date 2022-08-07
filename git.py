import os
from random import randint


for i in range(5):
    numb = randint(520, 600)
    d =str(numb) + " days ago"
    with open("a.txt", 'a') as file:
        file.write("a")
    os.system('git add .')
    os.system('git commit --date="' + d +'" -m "commit"')
    os.system('git push origin master')

    for i in range(randint(0,2)):
        n2 = randint(numb-2,numb+1)
        v = str(n2) + " days ago"
        for i in range(randint(0,2)):
            with open("a.txt", 'a') as file:
                file.write("a")
            os.system('git add .')
            os.system('git commit --date="' + v +'" -m "commit"')
            os.system('git push origin master')
