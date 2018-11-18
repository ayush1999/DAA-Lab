def write(name):
    f = open(name, 'w')
    for i in range(512):
        f.write(str(i))
        f.write('\n')

def binary_search(ele , l):
    if ele > l[-1]:
        return False
    else:
        mid = len(l) // 2
        if ele == l[mid]:
            return True
        else:
            if (ele > l[mid]):
                return (binary_search(ele , l[mid:]))
            else:
                return (binary_search(ele, l[:mid]))

f = open('sorted.txt', 'r')
num = []
for i in f.readlines():
    if i == '\n':
        continue

    num.append(int(i))
print(num)
print(binary_search(505, num))