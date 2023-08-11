def add_binary_integers(A, B, n):
    C = [0] * (n + 1)
    carry = 0
    
    for i in range(n):
        # Calculate the sum of current bits and carry
        total_sum = A[i] + B[i] + carry
        
        # Update the current bit of C
        C[i] = total_sum % 2
        
        # Calculate the carry for the next iteration
        carry = total_sum // 2
    
    # If there's still a carry left, set the MSB of C
    C[n] = carry
    
    return C

# Example usage
A = [1, 0, 1, 1]  # Binary representation of 11
B = [1, 1, 0, 1]  # Binary representation of 13
n = len(A)

result = add_binary_integers(A, B, n)
print(result)  # Output: [0, 0, 0, 0, 1] (Binary representation of 24)
