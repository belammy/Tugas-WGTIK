p = open("data02.txt", 'r')
q = p.read()
p.close()

int_list= list(map(int, p.split()))
print(int_list)
