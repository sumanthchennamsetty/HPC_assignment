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

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/1830f9af-f6b8-4094-8378-97ba33173097)


![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/e6a1bc55-ac30-4702-9a0e-852e77ebcddd)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/0dbbe4e4-9d03-4613-a42d-f001008e7f20)



b. Runtime vs. Matrix Sizes by fixing number of threads (Matrix Sizes - 512, 1024, 2048)
 
![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/26593714-79a0-41d7-945b-55465702eb99)


![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/9f79fcbb-b7f5-4113-8792-6b7c2a9e02d2)


![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/a9405860-b9ee-4bb8-aec0-f240b5528cb6)


![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/6445ae4b-d81a-4d97-8f6c-5a344f59da01)


![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/3e88ad19-849a-43cc-a283-bc1af8861a55)


![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/73fa3c55-0de7-49b7-88f3-cb9c0a81e3f2)


![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/22968672-8662-49ce-804f-a1960b08fd74)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/a0228c9b-37fe-41cd-a768-6509054a6c23)

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

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/42d9aae3-90ab-43e6-a2cf-1cb94010aa28)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/3465b7eb-1887-451f-9ca9-08b4550c8085)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/f9946aa7-5329-4877-be51-c8c0a929f6b0)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/fde09290-f37b-4910-9bde-e79e51562f18)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/59c70b51-45ec-4075-b8e8-76642a822c6b)


- For Matrix odf size 1024 and blocks size varies as 4,8,16,32,64
![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/9d32e066-093b-4be8-b6ac-74ca5dd4d787)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/2d43b3f9-545d-4b40-9fbf-2789d98b6e7d)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/12b4ccae-8794-4b98-970b-979e299357ba)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/79094dca-57ff-49bf-a582-6ba4c3f5ff16)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/fbc084dc-5582-4fb6-b88a-a9119914388f)

- For Matrix odf size 512 and blocks size varies as 4,8,16,32,64
![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/2d0f36a4-2a9b-4c7c-bcb8-f093251acf37)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/2e69c766-c5ac-4882-adb3-4f6690579fc4)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/26e07819-8f15-4de8-a8ca-c64064b56a60)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/8baa2fd0-b576-45b0-9a35-b2aca7971653)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/10fbd736-43cf-4a7f-a821-aa48ebd92761)


b. Runtime vs. Matrix Sizes by fixing number of threads (Matrix Sizes - 512, 1024, 2048)
- in this we kept thread number as constant in each case and changed the matix sizes
  
![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/832f0807-3e64-4484-a6bd-fec4a5ebb4ad)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/c1172bfe-a98a-491f-b56c-05a42862fd86)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/ac9a2be0-3177-49d7-bbfb-03a155b538dd)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/dac5daee-79f5-46dd-babb-291011f61786)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/49f0eae1-a361-4f7c-8a1a-d49a9fa347e6)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/9b913c63-f186-444e-bf04-bda43602fc65)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/95d01366-abd8-4b95-a87e-13ac34e1db8f)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/6d75ab2a-2104-4e85-b56e-5cf7820bee33)


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
  
![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/8c796a33-ab21-44df-a8d9-22056a0109d7)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/d3033629-949d-4b9f-b95e-0a50a675b33c)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/201feb58-6192-4b7a-977e-db68cd408bb4)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/2a786bff-1a38-4c9b-b24b-619eb7eaa1be)
![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/01d0371c-4af8-48cb-8b0a-cf74bd01716f)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/552617a9-e8cf-4638-9e6c-752498151f7b)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/f41fe800-588b-47f4-b563-b911f52163cf)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/407f5d62-9560-4bf6-9449-c8ec448e0c69)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/72b3b6e3-e7dd-4c81-b2af-c6fd1555841f)



b. Runtime vs. Matrix Sizes by fixing number of threads (Matrix Sizes - 512, 1024, 2048)
- in this we kept thread number as constant in each case and changed the matix sizes

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/f9b70f50-6d1a-4cfc-ba92-46cac79ce801)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/43c9b1e7-7140-4966-b02a-c644376e5f9d)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/490f7011-a700-4d0a-a871-065aeaa221f1)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/faa8ee3b-1b5f-4e92-8f38-b7e0a8c95492)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/16719121-66e6-4947-83ad-14d57203882b)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/9a2b4ac9-f95c-437d-a2b7-7eb76669df7c)


![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/b32d6cd9-854c-443b-9153-55ae3f2f2a6e)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/d6d5809b-8ae3-4592-8d88-7b41f9a641c0)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/ec1c7e0d-0907-4a3f-98d0-35d5be6ad2cb)


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
  
EXPONENT - 2 & MATRIX SIZE - 2028

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/9f6b99b6-19b5-47dd-8319-822dab5d6c1b)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/1b76d80a-ac18-4f87-9f30-8bb371353b97)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/1cfb9eb7-f33e-4267-bd4b-464ddc1c4470)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/ee9352dc-cfb5-4ca1-bee1-754f9be63511)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/c71b61df-1396-4f74-a096-1e9b3efefd2e)


EXPONENT - 2 & MATRIX SIZE - 1024

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/dded67f8-cfd4-4f97-a85f-c6768c5a09b2)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/d7fbe3e8-94a4-4aa3-8ec4-3f4a733b2c53)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/f7f5df2a-9764-4176-9ba6-5d04c7317f65)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/5b1608f5-11c0-4304-8a51-718b887b4691)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/1c49ac4f-a839-435c-adf1-2358dce93111)


EXPONENT - 2 & MATRIX SIZE - 512

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/30946322-3988-4e82-b741-139ee8896da8)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/691b3d44-a661-4aef-8e32-94427dd2716b)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/2a1907d6-f67e-4bdd-88b8-8980306c2a6c)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/f0133c71-590f-4013-85ee-89c0f2cb2416)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/dda7b594-5707-47ad-9ba7-6373fecb7f19)


EXPONENT - 8 & MATRIX SIZE - 512

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/2d98d613-a8cf-4b39-bd9a-2cf3c9b80525)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/b91b147a-5900-4f48-a50a-a42896c3f983)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/39f22c13-4219-4105-b5cf-4bdd7033e7fd)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/aac475aa-8f87-40de-ab53-9e31d446db87)


EXPONENT - 8 & MATRIX SIZE - 1024

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/d8680fa2-2d69-46a0-a77d-d7be3f9d0a01)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/82f96527-789d-42b4-90ef-8e987ee4bc93)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/150a20c4-ba4b-4b25-88fd-db4ba5fe5860)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/9329b469-36da-4d09-b541-85d669a9fa7e)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/2a2adeec-6569-4672-887c-6302478523b7)


EXPONENT - 8 & MATRIX SIZE - 2048

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/abd53bed-6618-4769-bdcb-2d668a5f8924)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/1dac1c48-73bf-4fe3-aad7-4a727db25266)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/2b04bfeb-a3e1-45e7-b229-765ae86a64fb)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/29fc0561-eaa3-4a1e-b866-da7a301155b0)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/583ff2ca-14cd-4165-9fef-962d76ee8a35)


b. Runtime vs. Matrix Sizes by fixing number of threads (Matrix Sizes - 512, 1024, 2048)
- in this we kept thread number as constant in each case and changed the matix sizes
- Block size varies between 4,16,32
  

Threads constant as 8
![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/8cd9fa24-5796-47a6-bee4-c60520ec8cb2)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/df18c3bb-b90f-400b-ad75-45d4178c1a7d)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/3b258e3b-173a-4a69-95f7-9418fa8ccdb7)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/b14bb143-8dba-4c0f-9005-fdb2ee1ca126)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/35b763a1-a839-435c-9f5d-9fd7ec82691b)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/8d7334fe-3498-4126-8e91-ba1a861ed21c)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/ed93e8f7-1f17-494b-aaf9-f04a0ded8800)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/cfaafed1-5bfa-4439-b850-9b14b3c1e4c7)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/f98df794-2c09-4993-8882-8102c6801dbd)



Threads constant as 16
![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/41df62c2-c8ec-4cde-ae38-9666fbce0fb4)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/abf450b4-80e3-473f-91f6-2382484ae49f)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/6b498715-7fd8-4523-87ef-1e48c818c8ee)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/f9cb79d3-1396-4d5d-b2bb-617e954a44cc)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/9a2770ea-b096-432e-96a0-db5d5b92b841)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/617c4b94-0ca0-4074-a279-c79e316790d7)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/370b5712-6de8-496a-b89b-273e8d0baec6)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/bba59a1f-81f1-41d1-a71b-de83040490aa)

![image](https://github.com/sumanthchennamsetty/HPC_assignment1/assets/138759091/52f082c5-fce8-4561-87ee-a4b33a95b922)


