#!/bin/sh
cd
curl -OL https://launchpad.net/gcc-arm-embedded/4.8/4.8-2013-q4-major/+download/gcc-arm-none-eabi-4_8-2013q4-20131204-linux.tar.bz2
bzip2 -d gcc-arm-none-eabi-4_8-2013q4-20131204-linux.tar.bz2
tar -x -f gcc-arm-none-eabi-4_8-2013q4-20131204-linux.tar
curl -OL http://prdownloads.sourceforge.net/docutils/docutils-0.12.tar.gz
gzip -d docutils-0.12.tar.gz
tar -x -f docutils-0.12.tar
cd docutils-0.12
python setup.py install --prefix=~/.local
cd
export PATH="$HOME/.local/bin:$PATH"
echo "export PATH=\"\$HOME/.local/bin:\$PATH\"" >> .bash_profile
cp .local/bin/rst2html.py .local/bin/rst2html
cd workspace
hg clone -r unified https://foss.heptapod.net/magic-lantern/magic-lantern
cd magic-lantern
