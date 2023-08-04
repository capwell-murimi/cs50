scores  =   []

for i   in  range(3):
    answer  =   int(input("answer:  "))
    scores.append(answer)

average =   sum(scores) /   len(scores)
print(f"Average: {average}")