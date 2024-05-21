# VectorVision

VectorVision is an advanced software solution designed to deliver precise vector classification using the K-Nearest Neighbors (KNN) algorithm. This powerful tool receives input from the client, specifying how and where to run the KNN algorithm for optimal performance.

## Key Features

- **Customizable K Parameter**: Users can input the value of 'k', representing the number of nearest classified vectors used to determine the classification of an unclassified vector. The value of 'k' must exceed the number of vectors in the classified dataset, ensuring accurate classification.
- **Flexible Distance Metrics**: VectorVision supports a variety of distance calculation metrics to cater to different analytical needs. Users can choose from:
  - Minkowski (MIN)
  - Euclidean (AUC)
  - Manhattan (MAN)
  - Chebyshev (CHB)
  - Canberra (CAN)
  
## Installation and Usage

### Compilation

To compile the project, use the following command:

```bash make```

## Installation
to compile
```bash
make
```
to run the Server
```bash
 ./Server {port}
```


to run the clinet 
```bash
 ./client {ip} {port}
```

It is recommended to use IP 127.0.0.1


exsmple:
```bash
make
./Server 44589
./client 127.0.0.1 44589
```
## important things:
1.The program needs two free ports,the port you write in the coomand line and the port after him.(For example: ./Server 12345. so the server needs the ports 12345 and 12346)
2.It is recommended to read the files from the folder names "fiels",so if you want read new file move him to this folder.
