f = open('numbers.txt', 'r')
num = []
for i in f.readlines():
    if i=='\n':
        continue;

    num.append(int(i))

print(num)