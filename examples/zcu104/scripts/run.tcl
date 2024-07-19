set MAX_CXUS 2
set MAX_STATES 4
set MAX_ITERS 100
set bitstream_path "/home/brandon/research/cva5pr/cva5/examples/zcu104/scripts/soc/soc.runs/impl_1/soc_wrapper.bit"

set SCA_TYPES(0) "cold"
set SCA_TYPES(1) "warm"

for {set i 0} {$i < 2} {incr i} {
    set binary_path "/home/brandon/playground/rgb_sca_$SCA_TYPES($i).rawbinary"
    fpga $bitstream_path
    after 500
    targets -set -filter {name =~ "MicroBlaze*"} -index 0
    dow -data $binary_path 0x80000000
    mwr 0x88100008 0x0
    after 1000
}

for {set k 0} {$k < $MAX_CXUS} {incr k} {
  set cxu [expr 1 << $k]
  for {set j 0} {$j < $MAX_STATES} {incr j} {
    set state [expr 1 << $j]
    set binary_path "/home/brandon/playground/rgb_vec_${cxu}x${state}.rawbinary"
    for {set i 0} {$i < $MAX_ITERS} {incr i} {
        puts "CXU $k"
        puts "State $j"
        puts "Iteration $i"
        fpga $bitstream_path
        after 500
        targets -set -filter {name =~ "MicroBlaze*"} -index 0
        dow -data $binary_path 0x80000000
        mwr 0x88100008 0x0
        after 500
    }
  }
}
