# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vcva5_sim.mk

default: cva5-sim

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vcva5_sim
# Module prefix (from --prefix)
VM_MODPREFIX = Vcva5_sim
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-g0 -O3 -std=c++14 -march=native -DDDR_SIZE=\(long\)4*\(long\)1073741824 -DPAGE_SIZE=\(2*1024\) -DMAX_INFLIGHT_RD_REQ=8 -DMAX_INFLIGHT_WR_REQ=8 -DMIN_DELAY_RD=15 -DMAX_DELAY_RD=30 -DMIN_DELAY_WR=1 -DMAX_DELAY_WR=1 -DDELAY_SEED=867583  -D TRACE_ON \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lz \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	axi_ddr_sim \
	ddr_page \
	CVA5Tracer \
	SimMem \
	cva5_sim \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/mnt/c/D/cva5pr/cva5/test_benches/verilator \
	/mnt/c/D/cva5pr/cva5/test_benches/verilator/AXI_DDR_simulation \


### Default rules...
# Include list of all generated classes
include Vcva5_sim_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

axi_ddr_sim.o: /mnt/c/D/cva5pr/cva5/test_benches/verilator/AXI_DDR_simulation/axi_ddr_sim.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
ddr_page.o: /mnt/c/D/cva5pr/cva5/test_benches/verilator/AXI_DDR_simulation/ddr_page.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
CVA5Tracer.o: /mnt/c/D/cva5pr/cva5/test_benches/verilator/CVA5Tracer.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
SimMem.o: /mnt/c/D/cva5pr/cva5/test_benches/verilator/SimMem.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
cva5_sim.o: /mnt/c/D/cva5pr/cva5/test_benches/verilator/cva5_sim.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
cva5-sim: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
