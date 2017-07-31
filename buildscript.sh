make mrproper
export USE_CCACHE=1
export CCACHE_DIR=~/.ccache-s905
export ARCH=arm64
export PATH=../gcc-linaro-4.9.4-2017.01-x86_64_aarch64-linux-gnu/bin:$PATH
export CROSS_COMPILE=aarch64-linux-gnu-
make zombie_defconfig |& tee log_generic.txt
make -j$(grep -c ^processor /proc/cpuinfo) |& tee -a log_generic.txt

