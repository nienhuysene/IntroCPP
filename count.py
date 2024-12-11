import time
start_time = time.time()
i=1
while i<1000000:
    print(i)
    i+=1
end_time = time.time()
duration = end_time - start_time
print(f"Execution time: {duration} seconds")
