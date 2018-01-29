import random
i=0
with open('numbers.txt','w') as f:
    for i in range(1000):
        f.write(str(random.randint(0,2000)))
        f.write('\n')


