set MAX_CXUS 2
set MAX_STATES 4
set MAX_ITERS 1
set bitstream_path "/home/brumaire/soc_wrapper_test.bit"

#set SCA_TYPES(0) "cold"
#set SCA_TYPES(1) "warm"

#for {set j 0} {$j < 2} {incr j} {
#  set binary_path "/home/brumaire/rgb_sca_$SCA_TYPES($j).rawbinary"
#  for {set i 0} {$i < $MAX_ITERS} {incr i} {
#    puts "$SCA_TYPES($j)"
#    puts "Iteration $i"
#    fpga $bitstream_path
#    after 500
#    targets -set -filter {name =~ "MicroBlaze*"} -index 0
#    dow -data $binary_path 0x80000000
#    mwr 0x88100008 0x0
#    after 1000
#  }
#}

for {set k 1} {$k < $MAX_CXUS} {incr k} {
  set cxu [expr 1 << $k]
  for {set j 3} {$j < $MAX_STATES} {incr j} {
    set state [expr 1 << $j]
    set binary_path "/home/brumaire/jacobi_${cxu}x${state}.rawbinary"
    for {set i 0} {$i < $MAX_ITERS} {incr i} {
        puts "CXU $k"
        puts "State $j"
        puts "Iteration $i"
        fpga $bitstream_path
        after 2000
        targets -set -filter {name =~ "MicroBlaze*"} -index 0
        dow -data $binary_path 0x80000000
        mwr 0x88100008 0x0
        after 1000
    }
  }
}
