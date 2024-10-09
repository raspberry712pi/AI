def TowerOfHanoi(n,Source,Destination,Auxillary):
    if n==1 :
        print("Move disk 1 from Source",Source,"to Destination",Destination)
        return
    TowerOfHanoi(n-1,Source,Auxillary,Destination)
    print("Move disk",n,"from Source",Source,"to Destination",Destination)
    TowerOfHanoi(n-1,Auxillary,Destination,Source)
n = 3
TowerOfHanoi(n,'A','C','B')
