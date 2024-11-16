import numpy as np
import math

class inverse:
    

    def find_center(self, position, Rfinal, l4):
        # Convert inputs to numpy arrays
        position = np.array(position).reshape(3, 1)  # Ensure it's a column vector
        print("Position:", position)
        
        Rfinal = np.array(Rfinal)
        vector = np.array([[1], [0], [0]])  # 3x1 column vector

        # Calculate the center of the point based on the formula
        o4 = position - l4 * np.dot(Rfinal, vector)  # Use np.dot for matrix multiplication

        # Return the computed center (ensure it is a 3x1 vector)
        return o4


  

    def calc_q2_q3(self,r, s, l2, l3, beta, q2, q3,):
        # Calculate D using the formula
        D = ((r**2 + s**2) - l2**2 - l3**2) / (2 * l2 * l3)
        print("D:", D)
        x1 = math.sqrt(1 - D**2)
        x2 = -math.sqrt(1 - D**2)
        # Calculate q2 using the corrected formulas
        #q2.append(math.atan2(s, r) - math.atan2(math.sqrt(1 - D**2), l2 + l3 * D) + beta)  # Actual q2 more clockwise by beta
        #q2.append(math.atan2(s, r) - math.atan2(-math.sqrt(1 - D**2), l2 + l3 * D) + beta)
        print("1st shot",math.atan2(r, s))
        print("2nd shot",math.atan2(l2 + l3 * D,x1))
        q2 =(math.atan2(s,r) - math.atan2(l3*x1,l2 + l3 * D) + beta)  # Actual q2 more clockwise by beta
        # Calculate q3 usinghe corrected formulas
        #q3.append(math.atan2(math.sqrt(1 - D**2), D) - beta)  # With respect to the actual q2
        #q3.append(math.atan2(-math.sqrt(1 - D**2), D) - beta)
        q3=((math.atan2( x2,D)) - beta)  # With respect to the actual q2
        return q2, q3
        
    
    def calc_q4(self,p, o4, q2, q3):
        # Calculate the sum of squares for the x and y components of p and o4
        rp = math.sqrt(p[0]**2 + p[1]**2)
        ro4 = math.sqrt(o4[0]**2 + o4[1]**2)
        r = rp - ro4
        # Calculate the sum of squares for p and o4 in the second part (s)
        sp = p[2]
        so4 = o4[2]
        s = sp - so4

        # Calculate q4 using atan2 and subtract q2 and q3
        q4 = (math.atan2(s, r)) -q3-q2
        
        return q4


def main():
    # Create an instance of the MatrixOperations class
    inv= inverse()

    position = [206,0,406.3]  
    q1=math.atan2(position[1],position[0])


    Rfinal = [[0.7071, 0, 0.7071], [0.7071, 0, -0.7071], [0, 1, 0 ]]
    l4 = 133.4  
    beta=math.atan2(24,128)
    print(beta)
    o4=inv.find_center(position,Rfinal,l4)
    print(f"o4: {o4}, Shape: {o4.shape}")
    r= math.sqrt(o4[0]**2 + o4[1]**2)
    print(r)
    s = o4[2] - 96.326
    print(s)
    l2=math.sqrt(128**2+24**2)
    print ("l2",l2)
    l3=124

    q2=0 # Empty list to store q2 values
    q3=0   # Empty list to store q3 values
    
    q2,q3=inv.calc_q2_q3(r,s,l2,l3,beta,q2,q3)

    q4=inv.calc_q4( position, o4, q2, q3)
    

    

   
    print("Calculated center:", o4)

    # Calculate q2 and q3
    
    print("Calculated q2:", q2)
    print("Calculated q3:", q3)

    # Calculate q4
    
    print("Calculated q4:", q4)
  
# Call the main function to run the program
if __name__ == "__main__":
    main()   

