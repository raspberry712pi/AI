graph={'5':['3','7'],'3':['2','4'],'7':['8'],'2':[ ],'4':['8'],'8':[ ]}
visited=[ ]
q=[ ]
def bfs(graph,visited,node):
	visited.append(node)
	q.append(node)
	while(q):
    	    m=q.pop(0)
               print(m)
    	    for n in graph[m]:
        	       if n not in visited:
            	visited.append(n)
            	q.append(n)
bfs(graph,visited,'5')     
