# https://www.hackerearth.com/practice/python/getting-started/input-and-output/practice-problems/golf/jadoo-and-dna-transcription/

d={"G":"C","C":"G","T":"A","A":"U"}
c=input()
 
for x in c:
    if x not in d:
        print("Invalid Input")
        exit()
        
for x in c:
    if x in d:
        print(d[x],end='')
    else:
        print("Invalid Input")
        break
        
        
