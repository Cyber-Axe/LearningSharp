# GPU计算作业一



## 查询你机器上GPU设备的参数

### GPU设备的数量

**主要代码**

~~~c
int deviceCount;
cudaError_t cudaError;
cudaError = cudaGetDeviceCount(&deviceCount);
printf("GPU设备的数量为：%d\n", deviceCount);
~~~

**运行结果**

![image-20200927095110149](C:\Users\26082\Desktop\image-20200927095110149.png)

### GPU设备的属性结构体

**主要代码**

~~~c
cudaDeviceProp deviceProp;
int deviceCount;
cudaError_t cudaError;
cudaError = cudaGetDeviceCount(&deviceCount);

printf("GPU设备的数量为：%d\n", deviceCount);

for(int i = 0; i < deviceCount; i++) {

	cudaError = cudaGetDeviceProperties(&deviceProp, i);

	printf("设备 %d 的主要属性：\n", i+1);
	printf("设备显卡型号： %s", deviceProp.name);
	printf("设备全局内存总量（以B为单位）： %ul\n", deviceProp.totalGlobalMem);
	printf("设备上一个线程块（Block）中可用的最大共享内存（以B为单位）： %ul\n", deviceProp.sharedMemPerBlock);
	printf("设备上一个线程块（Block）种可用的32位寄存器数量： %d\n", deviceProp.regsPerBlock);
	printf("设备上一个线程块（Block）可包含的最大线程数量： %d\n", deviceProp.maxThreadsPerBlock);
	printf("设备的计算功能集（Compute Capability）的版本号： %d.%d\n", deviceProp.major, deviceProp.minor);
	printf("设备上多处理器的数量： %d\n", deviceProp.multiProcessorCount);
}
~~~

**运行结果**

![image-20200927095525380](C:\Users\26082\Desktop\image-20200927095525380.png)

### 解释关键属性的含义

* 设备名称：即所识别计算设备的ASCII字符串
* 计算能力：计算设备对于数据的处理速度
* 设备可用全局内存：即全局的内存大小
* 每线程块最大线程数：表示每个Block中最大的线程数
* 每线程块可用共享内存容量：即每个block内共享内存的大小
* 每线程块可用寄存器数量：每个block可用32位寄存器的个数
* 每个处理器簇最大驻留线程数：即每个处理器簇所限制的最大驻留的线程数
* 设备中的处理器簇数量：计算设备中的处理器簇的数量



## 编写并运行VectorSum内核

**具体代码**

见附件

**运行结果**

![image-20200927101046437](C:\Users\26082\Desktop\image-20200927101046437.png)