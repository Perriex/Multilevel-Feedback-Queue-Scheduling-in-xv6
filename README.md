# Multilevel Feedback Queue Scheduling in xv6

One of the most important tasks of operating systems is to allocate hardware resources to user-level applications. In this case, the processor is the most important source of these resources, which is allocated to processes by the operating system scheduler. This part of the operating system runs at the kernel level and, to be more precise, schedules the kernel thread.

In this scheduler, processes are placed at different levels according to their priority. In this project, it is assumed that there are three levels and consequently three priorities.

### Queues
- Round Robin
- SCFS
- HRRN

### Commands

- foo

for creating some proesses.

- pprocs

print all exiting processes.

- setprocparam & setsysparam

set parameters for MHRRN algorithem in process level or system level.


# Credits
- Omid Panakari
- Morteza Bahjat
- Parna Asadi
