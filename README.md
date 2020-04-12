# FIFO-First-in-First-Out-Algorithm-Implementation


The simplest page-replacement algorithm is a FIFO algorithm. The first-in, first-out (FIFO) page replacement algorithm is a low-overhead algorithm that requires little bookkeeping on the part of the operating system. In simple words, on a page fault, the frame that has been in memory the longest is replaced. 

# Inputs required – 
  1. Input the no. of pages. 
  2. Input size of frames. 
  3. Input values of page values.


# Procedure –
1. Assign values in frame = -1 initially.

In Loop:
  
  2.  For initial values we are comparing in if condition if value in frame array is 1 and loop variable i < frame size, here enqueuing of values will take place. Page Fault counter will increment here.
  
  3. When frame array is full and when new value come, we need to see if already present in frame array or not. Hit counter will increment here.
  
  4. If not in array z counter will increment and will be equal to frame size. Which will mean it’s new value and we need to enter that value in array and remove the value using FIFO concept. Page Fault counter will increment here.
  
#  Output –  
1. Frame array as it changes. 
2. Final Frame array. 
3. No. of hits. 
4. No. of page faults.

# Example -

Enter the no. of pages : 7

Enter the size of frame : 3

 Enter the pages value :
1
3
0
3
5
6
7

 Current Frame:  -1 	 -1 	 1 

 Current Frame:  -1 	 3 	 1 

 Current Frame:  0 	 3 	 1 

 Current Frame:  0 	 3 	 1 

 Current Frame:  5 	 0 	 3 

 Current Frame:  6 	 5 	 0 

 Current Frame:  7 	 6 	 5 

 frame at the end :
 b[0] = 5
 b[1] = 6
 b[2] = 7
 Page Fault = 6 
 Hit = 1




