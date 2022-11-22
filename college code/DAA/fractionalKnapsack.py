class item:
    def __init__(self,value,weight):
        self.value=value
        self.weight=weight

def fractionalknapsack(W,arr):

    arr.sort(key=lambda x: (x.value/x.weight),reverse=True)

    finalvalue=0.0

    for item in arr:
        if(item.weight<=W):
            W-=item.weight
            finalvalue+=item.value
        
        else:
            finalvalue+=item.value*W/item.weight
            break

    return finalvalue

W=50
arr=[item(60,10),item(100,20),item(120,30)]

max_val=fractionalknapsack(W,arr)
print(max_val)
