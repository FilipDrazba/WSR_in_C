import os

total_in = 0
total_N = 0

for filename in os.listdir():
    if filename.startswith("out_") and filename.endswith(".txt"):
        with open(filename) as f:
            in_circle = int(f.readline().strip())
            total = int(f.readline().strip())

            total_in += in_circle
            total_N += total

pi_estimate = (total_in * 4.0) / total_N
print(f"Przybliżona wartość π: {pi_estimate}")
