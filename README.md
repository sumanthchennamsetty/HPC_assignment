#  Parallel coding using OpenMP 
### Different types of Matrix Multiplication
##### 1. Ordinary Matrix Multiplication (OMM).
##### 2. Block Matrix Multiplication (BMM) using block sizes: 4,8,16,32,64.
##### 3. Tranpose of A to find nth Power using OMM.
##### 4. Tranpose of A to find nth Power using BMM.
### Graphs the different types of Multiplications
##### a. Runtime vs. Matrix Sizes by fixing number of threads
##### b. Runtime vs. Threads by fixing the Matrix Size.
***
### 1. Ordinary Matrix Multiplication (OMM).
Code Description
- Initializes matrices A and B with random values.
- Allows us to specify the number of threads for parallelization.
- Uses OpenMP to parallelize the matrix multiplication.
- Measures the elapsed time for the multiplication process.
- Outputs the elapsed time in seconds.
### Graphs
a. Runtime vs. Threads by fixing the Matrix Size. (Threads varies as 1,2,4,6,8,10,12,14,16)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/38c0121b-5f82-45da-8bf2-4fe059c585fb)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/b7c776fd-a552-4874-9f46-9fa4f122bc69)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/17c8af1f-ce0f-4f93-9daa-fabf522e106f)


b. Runtime vs. Matrix Sizes by fixing number of threads (Matrix Sizes - 512, 1024, 2048)
 
![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/c632ba7e-bde7-40dc-bfa4-06f682d95230)


![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/f08cdf14-e716-4b60-b565-5a591cc2bab9)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/1ad95799-3562-4a48-86f1-d3471f3e5881)


![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/8c839b5d-e5e9-488c-925f-079027996a43)


![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/9fd61d85-fcd6-4709-b38c-8cd55dfdf4a1)


![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/609ac744-415b-4f3c-975f-38a0b33c680d)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/0ff62776-dcdb-4285-b574-06c50234775a)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/a103727f-1af8-442d-9c40-d36d841c388c)

***
### 2. Block Matrix Multiplication (BMM) using block sizes: 4,8,16,32,64.
- Initialization of Matrices A and B:

We start by initializing matrices A and B with random values. This step ensures that our matrices have valid data for multiplication.
User-Defined Thread Count:

We give you the flexibility to specify the number of threads to be used for parallelization. This allows you to optimize performance based on the number of available CPU cores or other considerations.

- Parallel Matrix Multiplication with OpenMP:

The core of our implementation lies in parallelizing the matrix multiplication using OpenMP. OpenMP allows us to harness the power of multiple threads and divide the workload efficiently.
To achieve this, we break the matrix into smaller blocks and distribute these blocks among the threads for simultaneous computation.

- Exploring Block Sizes:

We understand that different block sizes can have varying impacts on performance. Therefore, our program lets you specify the block size.
Matrix multiplication is carried out by taking into account these block sizes, allowing you to experiment and analyze the effects on execution time.

- Timing the Process:

To evaluate the efficiency of our BMM implementation, we measure the elapsed time for the entire matrix multiplication process.
We utilize functions like gettimeofday() to ensure accurate timing and capture the start and end times.

- Outputting Elapsed Time:

After completing the matrix multiplication, we provide you with the elapsed time in seconds.
This information is invaluable for assessing the efficiency of our BMM algorithm under different configurations.


### Graphs
a. Runtime vs. Threads by fixing the Matrix Size. (Threads varies as 1,2,4,6,8,10,12,14,16)
- For Matrix odf size 2048 and blocks size varies as 4,8,16,32,64

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/71579463-473e-40dc-a528-ec970929c627)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/1ce8f086-816b-4e98-ba22-cdb41426f354)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/ce3d3f0c-bca2-4fbb-b055-697d4eed4619)
![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/bef4c816-9306-40d8-9309-629ab07061dd)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/752dad47-2584-44bd-8d17-442b13f1bac1)




- For Matrix odf size 1024 and blocks size varies as 4,8,16,32,64
![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/d89a6db5-a5a6-4874-83aa-0b57872f4be9)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/a16aadc6-9ac5-42c6-b67b-c9f9caa6ed4b)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/2d568317-e434-4768-8d82-8c9bed00cb1e)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/13cbc6d5-e263-4279-883d-32060991930a)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/f0e03ad4-2533-409c-90c2-3dbe65677c5a)


- For Matrix odf size 512 and blocks size varies as 4,8,16,32,64
![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/de6fe063-6dc6-4acb-9e80-1a5aaf417a69)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/5da08dda-e500-4f4f-bafd-9ae105f5089f)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/3a6618a3-05a7-40cb-ad1b-9b5084ff6683)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/a8f29beb-917d-44a2-bea0-fc90923e9563)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/5034e8e0-afd6-4824-b189-7fe82c016efc)


b. Runtime vs. Matrix Sizes by fixing number of threads (Matrix Sizes - 512, 1024, 2048)
- in this we kept thread number as constant in each case and changed the matix sizes
  
![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/dd694b9d-0c46-49f1-8ed9-920535ed7e8e)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/fb0dc9d1-4f0d-4baf-8c07-5f4d834f351b)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/c7bd989b-32da-4305-a5f7-1cd92d040b25)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/7d81a914-60a3-40d0-a8b5-0e3ef1a6380b)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/2ee79475-f6f3-4952-a071-ac29105d8f30)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/f6247543-566a-48fb-b83b-aae90952c532)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/204ae861-68e6-4247-a731-43132276d420)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/8dd087e6-6bd1-41db-8494-78074481086f)

***
##### 3. Tranpose of A to find nth Power using OMM.
- Initialization of Matrix A :

We start by initializing matrices A with random values. This step ensures that our matrices have valid data for multiplication.

-User-Defined Thread Count:

We give you the flexibility to specify the number of threads to be used for parallelization. This allows you to optimize performance based on the number of available CPU cores or other considerations.

- Transpose of A
  - In the regular matrix multiplication, basically we multply row of one matrix with column of another 
    matrix, instead in this transpose approach if we transpose atleast one matrix in matrix multiplication 
    process we can directly multply row with row, this helps to reduce the run time.
  - in oue approach we varied n between 2-16 where N is exponent of Am A is the matrix with order varies 
    between 512 & 2048.
  - Here exponent implies number of times of multiplication of matrix A with itself.  

- Parallel Matrix Multiplication with OpenMP:

The core of our implementation lies in parallelizing the matrix multiplication using OpenMP. OpenMP allows us to harness the power of multiple threads and divide the workload efficiently.
To achieve this, we break the matrix into smaller blocks and distribute these blocks among the threads for simultaneous computation.

- Outputting Elapsed Time:

After completing the matrix multiplication, we provide you with the elapsed time in seconds.
This information is invaluable for assessing the efficiency of our BMM algorithm under different configurations.

### Graphs
a. Runtime vs. Threads by fixing the Matrix Size. (Threads varies as 1,2,4,6,8,10,12,14,16)

- EXPONENTS i.e, no of Matrixes being multiplied in an itreation will be from 2 to 10.
  
![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/055b3e36-3a0b-4d90-b00c-905e39504b5f)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/84dcb321-595c-40e2-8db3-b19ea51f030b)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/92782594-63d0-4376-b842-34d0c0c73d7b)
![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/d252e0d6-c879-4b76-b2e9-8562304988c6)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/6cba755d-322b-46c0-b7fa-b0211549dccd)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/45a31258-c122-407c-93dd-92034581a4cd)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/d33763e0-13ff-43c3-8c97-a9f6af12105f)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/899f8eec-13e9-40f3-8707-52508542ae51)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/7a2cc02c-2ef8-4463-accf-44bc83e8151e)




##### 4. Tranpose of A to find nth Power using BMM.

We start by initializing matrices A with random values. This step ensures that our matrices have valid data for multiplication.
- Transpose of A
  - In the regular matrix multiplication, basically we multply row of one matrix with column of another 
    matrix, instead in this transpose approach if we transpose atleast one matrix in matrix multiplication 
    process we can directly multply row with row, this helps to reduce the run time.
  - in oue approach we varied n between 2-16 where N is exponent of Am A is the matrix with order varies 
    between 512 & 2048.
  - Here exponent implies number of times of multiplication of matrix A with itself.
 
- Exploring Block Sizes:

We understand that different block sizes can have varying impacts on performance. Therefore, our program lets you specify the block size.
Matrix multiplication is carried out by taking into account these block sizes, allowing you to experiment and analyze the effects on execution time.

- Timing the Process:

To evaluate the efficiency of our BMM implementation, we measure the elapsed time for the entire matrix multiplication process.
We utilize functions like gettimeofday() to ensure accurate timing and capture the start and end times.

- Outputting Elapsed Time:

After completing the matrix multiplication, we provide you with the elapsed time in seconds.
This information is invaluable for assessing the efficiency of our BMM algorithm under different configurations.


### Graphs
a. Runtime vs. Threads by fixing the Matrix Size. (Threads varies as 1,2,4,6,8,10,12,14,16)
- For Matrix odf size 2048 and blocks size varies as 4,8,16,32,64
  
EXPONENT - 2 & MATRIX SIZE - 2048

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/c24ab898-0233-4d93-91e4-2cc11c815b44)


![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/ca7e40cc-7980-4b23-9df0-01e440bb105c)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/0554cb70-8ac2-4200-855d-9cb81b09d028)
![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/1f153ab1-917e-4a68-9319-e7317c1fa92a)



![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/a2e8f03f-6682-4e5a-a51d-cd527d0615bd)


EXPONENT - 2 & MATRIX SIZE - 1024
![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/679ac686-be52-44ce-b3c1-948b38e99c32)


![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/4b468d5b-d07b-4def-9327-30f6a313dc95)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/cb97fc6d-8aac-4002-a884-95927e978806)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/86d9d92a-4fa8-4311-8e4a-3ea773942447)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/346a95d1-ba39-44e2-80d0-56815afc95a5)


EXPONENT - 2 & MATRIX SIZE - 512
![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/0a85129d-483f-4555-a72d-061617259831)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/f063f47a-97bc-4275-8fc1-c3bd6385cb38)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/204b2a86-8688-42a7-90e7-4cf0da4d1fcf)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/5c2fbb39-cb9d-4580-a668-936da212e7dd)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/3c2f60fd-08bf-4574-add7-96a90b06755c)


EXPONENT - 8 & MATRIX SIZE - 512
![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/b0d3a06a-8535-47d7-aaed-8c9e7d596cd1)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/e3115810-5fbe-4dbc-85e2-4557cd92dc35)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/b9b9032a-a84b-47d7-a41b-7272423253c7)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/e307100e-16c1-40e4-9ad0-e5d6de25b1dd)
![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/c477e51c-648c-4763-95b7-82298293054d)


EXPONENT - 8 & MATRIX SIZE - 1024
![image](https://github.com/chaitanyabalajireddy/HPC_Assignment-_1/assets/91625648/87b792a1-1760-4a2a-9e8f-c93744717013)
![image](https://github.com/chaitanyabalajireddy/HPC_Assignment-_1/assets/91625648/5e9e1a2e-0a2f-4ea2-9f99-e4f0ed834105)
![image](https://github.com/chaitanyabalajireddy/HPC_Assignment-_1/assets/91625648/0b7865ac-7c39-43cb-b5c3-46acf1508e8f)
![image](https://github.com/chaitanyabalajireddy/HPC_Assignment-_1/assets/91625648/13d2ec77-8e0c-4b72-8d15-1a7818da472c)
![image](https://github.com/chaitanyabalajireddy/HPC_Assignment-_1/assets/91625648/7c1873d4-e09f-488e-a06c-e51f9641ff9a)

EXPONENT - 8 & MATRIX SIZE - 2048
![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/7e633487-11dd-462d-a944-e00ad1408a4a)


![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/03960584-913f-4ed8-9c7b-9a8f452e674d)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/4c9f74fc-3e9e-4ac3-9483-06f83ae612af)


![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/abd8df76-cde5-43e6-b070-eaf88ce48d12)


![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/c9c27b47-3db8-4155-87e8-cd8db678c9b3)


b. Runtime vs. Matrix Sizes by fixing number of threads (Matrix Sizes - 512, 1024, 2048)
- in this we kept thread number as constant in each case and changed the matix sizes
- Block size varies between 4,16,32
![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/4ef80a07-fd2e-4050-8bc4-d7be5d931290)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/a857f3f8-22cb-48bd-84e0-49e5ecdd2af9)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/29b79c6e-5717-4df7-b550-263f81ca5ad0)


Threads constant as 8 

