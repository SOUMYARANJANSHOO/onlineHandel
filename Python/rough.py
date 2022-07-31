score={"kapil":40,"sachin":55,"saurav":80,"rahul":35,"yuvraj":110}
def PUSH(S,M):
    S.append(M)
def POP(S):
    if S!=[]:
        S.pop()
    else:
        return None
slist=[]
for i in score:
    if score[i]>49:
        PUSH(slist, i)

while True:
    if slist!=[]:
        print(POP(slist),end=" ")
    else:
        break