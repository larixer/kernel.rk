#! /bin/sh

echo "Cleaning up"
rm -rf kernel-2.6.33
mkdir -p downloads
cd downloads
echo "Downloading Linux Kernel 2.6.33.7"
wget -qc --show-progress https://www.kernel.org/pub/linux/kernel/v2.6/linux-2.6.33.7.tar.xz
echo "Downloading Patch to 2.6.33.7.2-rt30"
wget -qc --show-progress https://www.kernel.org/pub/linux/kernel/projects/rt/2.6.33/older/patch-2.6.33.7.2-rt30.xz
cd ..
echo "Unpacking Linux Kernel 2.6.33.7"
tar xf downloads/linux-2.6.33.7.tar.xz
mv linux-2.6.33.7 kernel-2.6.33
cd kernel-2.6.33
echo "Patching Linux Kernel to 2.6.33.7.2-rt30"
cat ../downloads/patch-2.6.33.7.2-rt30.xz | xz -d | patch -s -p1
echo "Copying Nexell Linux Kernel files"
cp -rf ../files/. .
echo "Applying Nexell Patches"
cat ../patches/netfilter.patch | patch -s -p1
cat ../patches/nexell.patch | patch -s -p1
