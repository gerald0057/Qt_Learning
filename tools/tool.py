import os

l = os.listdir()
print(l)

for f in l:
    if f.startswith('button') and f.find('group') < 0:
        os.rename(f, 'push_' + f)