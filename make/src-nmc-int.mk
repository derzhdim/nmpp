INC_DIRS         = -I../../include
INC_DIRS+= -I../../include/nmpps

SRC_DIRS         = 	 \
					$(ROOT)/src/nmplc/arithmetic/common \
					$(ROOT)/src/nmplc/fixpoint32/nm \
					$(ROOT)/src/nmplc/fixpoint64/nm \
					$(ROOT)/src/nmplc/init/common \
					$(ROOT)/src/nmplc/integer/nm \
					$(ROOT)/src/nmpli/Arithmetics/nm \
					$(ROOT)/src/nmpli/Convert/common \
					$(ROOT)/src/nmpli/Convert/nm \
					$(ROOT)/src/nmpli/Filtration/common \
					$(ROOT)/src/nmpli/Filtration/nm \
					$(ROOT)/src/nmpli/Floodfill/common \
					$(ROOT)/src/nmpli/Floodfill/nm \
					$(ROOT)/src/nmpli/Init/common \
					$(ROOT)/src/nmpli/Print/nm \
					$(ROOT)/src/nmpli/Reodering/nm \
					$(ROOT)/src/nmpli/Resample/common \
					$(ROOT)/src/nmpli/Resample/nm \
					$(ROOT)/src/nmpli/Select/nm \
					$(ROOT)/src/nmpli/Select/common \
					$(ROOT)/src/nmpli/Support/common \
					$(ROOT)/src/nmplm/Core/nm \
					$(ROOT)/src/nmplm/Init/nm \
					$(ROOT)/src/nmplm/Inverse/common \
					$(ROOT)/src/nmplm/MatrixVector/nm \
					$(ROOT)/src/nmplm/Support/common \
					$(ROOT)/src/nmplm/Stat/common \
					$(ROOT)/src/nmpls/Correlation/nm \
					$(ROOT)/src/nmpls/Metric \
					$(ROOT)/src/nmpls/FFT/common \
					$(ROOT)/src/nmpls/FFT/FFT0016/nm \
					$(ROOT)/src/nmpls/FFT/FFT0016/common \
					$(ROOT)/src/nmpls/FFT/FFT0032/nm \
					$(ROOT)/src/nmpls/FFT/FFT0032/common \
					$(ROOT)/src/nmpls/FFT/FFT0064/nm \
					$(ROOT)/src/nmpls/FFT/FFT0064/common \
					$(ROOT)/src/nmpls/FFT/FFT0256/nm \
					$(ROOT)/src/nmpls/FFT/FFT0256/common \
					$(ROOT)/src/nmpls/FFT/FFT0512/nm \
					$(ROOT)/src/nmpls/FFT/FFT0512/common \
					$(ROOT)/src/nmpls/FFT/FFT1024/nm \
					$(ROOT)/src/nmpls/FFT/FFT1024/common \
					$(ROOT)/src/nmpls/FFT/FFT2048/nm \
					$(ROOT)/src/nmpls/FFT/FFT2048/common \
					$(ROOT)/src/nmpls/FFT/FFT4096/nm \
					$(ROOT)/src/nmpls/FFT/FFT8192/nm \
					$(ROOT)/src/nmpls/FFT/FFT8192/common \
					$(ROOT)/src/nmpls/FFT/IFFT0256/nm \
					$(ROOT)/src/nmpls/FFT/IFFT0512/nm \
					$(ROOT)/src/nmpls/FFT/IFFT1024/nm \
					$(ROOT)/src/nmpls/FFT/IFFT2048/common \
					$(ROOT)/src/nmpls/FFT/IFFT2048/nm \
					$(ROOT)/src/nmpls/FFT/IFFT4096/nm \
					$(ROOT)/src/nmpls/FFT/IFFT8192/nm \
					$(ROOT)/src/nmpls/FFT/IFFT8192/common \
					$(ROOT)/src/nmpls/FFT/FFTFree/common \
					$(ROOT)/src/nmpls/Filtration/nm \
					$(ROOT)/src/nmpls/Filtration/common \
					$(ROOT)/src/nmpls/Resample/common \
					$(ROOT)/src/nmpls/Resample/nm \
					$(ROOT)/src/nmplv/Arithmetics/common \
					$(ROOT)/src/nmplv/Arithmetics/nm \
					$(ROOT)/src/nmplv/Bitwise/nm \
					$(ROOT)/src/nmplv/Init/common \
					$(ROOT)/src/nmplv/Init/nm \
					$(ROOT)/src/nmplv/Select/common \
					$(ROOT)/src/nmplv/Select/nm \
					$(ROOT)/src/nmplv/Stat/common \
					$(ROOT)/src/nmplv/Stat/nm \
					$(ROOT)/src/nmplv/Support/nm \
					$(ROOT)/src/nmplv/Support/common \
					$(ROOT)/src/nmplv/Tables/nm \
					$(ROOT)/src/nmplv/Transform/common \
					$(ROOT)/src/nmplv/Transform/nm \
					$(ROOT)/src/nmvcore/nm  \
					$(ROOT)/src/nmplv/Init/nm-risc
					
					
SRC_DIRS+= $(ROOT)/src/nmpps/arithmetic
SRC_DIRS+= $(ROOT)/src/nmpps/atan
SRC_DIRS+= $(ROOT)/src/nmpps/blackman
SRC_DIRS+= $(ROOT)/src/nmpps/common
SRC_DIRS+= $(ROOT)/src/nmpps/conversion
SRC_DIRS+= $(ROOT)/src/nmpps/cos
SRC_DIRS+= $(ROOT)/src/nmpps/div
SRC_DIRS+= $(ROOT)/src/nmpps/exp
SRC_DIRS+= $(ROOT)/src/nmpps/initialization
SRC_DIRS+= $(ROOT)/src/nmpps/kaiser
SRC_DIRS+= $(ROOT)/src/nmpps/norm
SRC_DIRS+= $(ROOT)/src/nmpps/normalize
SRC_DIRS+= $(ROOT)/src/nmpps/phase
SRC_DIRS+= $(ROOT)/src/nmpps/random
SRC_DIRS+= $(ROOT)/src/nmpps/shift
SRC_DIRS+= $(ROOT)/src/nmpps/sort
SRC_DIRS+= $(ROOT)/src/nmpps/sqrt
SRC_DIRS+= $(ROOT)/src/nmpps/statistical
SRC_DIRS+= $(ROOT)/src/nmpps/threshold
SRC_DIRS+= $(ROOT)/src/nmpps/windowing
SRC_DIRS+= $(ROOT)/src/nmpps/polar
SRC_DIRS+= $(ROOT)/src/nmpps/powerspectr
SRC_DIRS+= $(ROOT)/src/nmpps/winhamming
SRC_DIRS+= $(ROOT)/src/nmpps/add
SRC_DIRS+= $(ROOT)/src/nmpps/mul
SRC_DIRS+= $(ROOT)/src/nmpps/sub
					