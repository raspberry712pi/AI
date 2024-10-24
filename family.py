def parent(parent,child):
    return f"{parent} is a parent of {child}"
relationships=[
    parent("James 1","Charels 1"),
    parent("James 1","Elizabeth"),
    parent("Charles 1","Catherine"),
    parent("Charles 1","Catherine"),
    parent("Charles 1","Charles 2"),
    parent("James 2","Sophia"),
    parent("Sophia","George 1"),
]
for relation in relationships:
    print(relation)
