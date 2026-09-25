# Silicon Life Open Source Package: 
---
## slif_control.
- Optimus:                     Package INSTANTIATION Primer.
### slif_control : ExclusiveCohesionMutexQueue.
 - ExclusiveCohesionMutexQueue: CLIB Request, Wait, Write-Read for : ('AccessId' at 'DataClusterId').
 - ThreadsLog:                  CLIB Console output via MutexQue for : ('DataCluster="Console"')
### slif_control : LaunchQueue.
 - LaunchQue:                   CLIB Request, Wait, Launch for : ('ConcurrentThreadId') deployed at Server or Client.
### slif_control : Bus.
 - MainStreamBus:               CLIB Compound of ExclusiveCohesionMutexQueue(s). A single Bus with route array of Stations for : A single Bus deploying an ExclusiveCohesionMutexQueue('AccessId_A=StationId','DataClusterId_A=StationId'), and each Station deploying an ExclusiveCohesionMutexQueue('AccessId_B','DataClusterId_B=StationId').

---
## slif_epicentre.
 - Optimus:                     Package INSTANTIATION Primer.
 - OpenEpicentre:               CLIB Concurrent Server with independent task threads and IO wrapper.

---
---
## Branches.
 - 

---
## Using.
### LINUX Ubuntu.
**version:** Ubuntu 24.04.4 LTS.

### CLion. 
**Version:** 2026.1.2.

---
### Dependencies.
#### Ubuntu Terminal.
````
sudo apt install git
````

````
sudo apt install build-essential
````

````
sudo apt install cmake
````

````
sudo apt install snapd
````

````
sudo snap install clion --classic
````

#### CLion plugins.
- Native Build Tools.
- Cmake.
- CLion C and C++.

---
## Building - Compiler Terminal Commands.
### CLIB_LaunchEnableForConcurrentThreadsAt_END.so

*** Load Root CMake Project ***

````
cmake -B build
````
````
cmake --build build
````
*** manual copy build library file to libs folder in TESTBENCH ***

*** Reload Root CMake Project ***

````
cmake -B build
````
````
cmake --build build
````

*** run TESTBENCH ***

---
## Implementation.
### How To Guide - Stack Flow From Client Input Scanner To Server And Back To Client.
 - 

### Wrapper Imports and Native IO.
 - 

---
---
