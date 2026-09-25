# Silicon Life Open Source Package: 
---
## slif_control.
- Optimus:                     Package INSTANTIATION Primer.
### slif_control : ExclusiveCohesionMutexQueue.
 - ExclusiveCohesionMutexQueue: CLIB Request, Wait, Write-Read for ('AccessId' at 'DataClusterId').
 - ThreadsLog:                  CLIB Console output via MutexQue, DataCluster is 'Console'.
### slif_control : LaunchQueue.
 - LaunchQue:                   CLIB Request, Wait, Launch for 'ConcurrentThreadId' at Server-Client.
### slif_control : Transporter.
 - MainStreamBus:               CLIB Compound of ExclusiveCohesionMutexQueue(s). A route array of ('AccessId=StationId','DataClusterId=StationId'), and every 'stationId' deploys an IO buffer via ExclusiveCohesionMutexQueue ('AccessId','DataClusterId=StationId'), with 2xDataClusterId(s).

---
## slif_epicentre.
 - Optimus:                     Package INSTANTIATION Primer.
 - OpenEpicentre:               CLIB Concurrent Server with independent task threads and IO wrapper.


===
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
