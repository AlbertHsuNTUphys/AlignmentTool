#!/usr/bin/env python2

content = '''+JobFlavour = "longlunch"

periodic_release =  (NumJobStarts < 4) && ((CurrentTime - EnteredCurrentStatus) > 60) 

getenv     = True 
myPath     = {PATH}/test
storePath  = {STOREPATH}/test
executable = $(myPath)/condor/script.sh
input      = $(myPath)/AlignIter_cfg.py

should_transfer_files = YES
transfer_input_files  = $(myPath)/inputFiles_cfi.py, $(myPath)/inputMatrixElements_cfi.py, $(myPath)/Cert_Collisions2022_355100_357900_Golden.json, $(myPath)/ESAlignments_Run3_2022B_iter11.db
transfer_output_files = ""
max_retries = 5

output     = $(myPath)/condor/{DIR}/out/hello.$(ClusterID).$(ProcID).out
error      = $(myPath)/condor/{DIR}/err/hello.$(ClusterID).$(ProcID).err
log        = $(myPath)/condor/{DIR}/log/hello.$(ClusterID).$(ProcID).log

iteration = {ITERN}
queue arguments from (
'''
