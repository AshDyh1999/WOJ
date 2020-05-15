# def r(point,graph):
#     if point[0]>=graph[0] and point[1]>=graph[1] and point[0]<=graph[2] and point[1]<=graph[3]:
#         return 1
#     else:
#         return 0
def r(point,graph):
    if not((point[0]-graph[0])*(point[0]-graph[2]) > 0 or (point[1]-graph[1])*(point[1]-graph[3]) > 0):
        return 1
    else:
        return 0
def c(point,graph):
    if (point[0]-graph[0])*(point[0]-graph[0])+(point[1]-graph[1])*(point[1]-graph[1]) <= graph[2]*graph[2]:
        return 1
    else:
        return 0

inputLine = input()
alltu=[]
while inputLine!="*":
    listLine = inputLine.split(' ')
    listLine[1:] = [float(e) for e in listLine[1:]]
    alltu.append(listLine)
    inputLine = input()

inputLine = input()
point_list=[]
while inputLine!="9999.9 9999.9":

    listLine = inputLine.split(' ')
    listLine = [float(e) for e in listLine]
    point_list.append(listLine)

    inputLine = input()

for j in range(len(point_list)):
    flag = 0
    for i in range(len(alltu)):
        if alltu[i][0]=='r':
            res=r(point_list[j],alltu[i][1:])
        elif alltu[i][0]=='c':
            res = c(point_list[j], alltu[i][1:])
        if res==1:
            flag=1
            print('Point '+str(j+1)+' is contained in figure '+str(i+1))
    if flag==0:
        print('Point '+str(j+1)+' is not contained in any figure')

