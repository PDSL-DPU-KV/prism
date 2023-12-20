#!/bin/bash -e
#are devices mounted?
if grep -qs '/mnt/pmem0 ' /proc/mounts; then
    echo "Devices are mounted."
else
    echo "Devices are NOT mounted."
    exit 1
fi

TIMESTAMP=`date +%y-%m-%d-%H:%M`
CURRENT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
ROOT_DIR="${CURRENT_DIR}"
PRISM_DIR="${ROOT_DIR}/PRISM"			    #PRISM directory.
RESULT_DIR="${CURRENT_DIR}/result"		    #Results go this directory.
WORKLOAD_SRC="${ROOT_DIR}/ycsb_generator"	    #Generated YCSB workloads are in this directory.
WORKLOAD_DST="${ROOT_DIR}/workloads"		    
THROUGHPUT_OUTPUT="${CURRENT_DIR}/throughput.txt"   #Results(throughput) are written in this file.
INSERT_OUTPUT="${CURRENT_DIR}/insert.txt"	    #Results(insert throughput) are recorded in this file.

KEY_TYPE=(zipf)	    #"rand": skewed, "mono": uniformed.
WORKLOAD_TYPE=(a b c d e)   #Typing which workload_type will be tested.