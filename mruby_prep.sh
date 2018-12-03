#!/bin/bash

SRCDIR=mruby-src

if [ ! -e $SRCDIR ]; then
  git clone git@github.com:mruby/mruby.git $SRCDIR
fi

pushd $SRCDIR

export MRUBY_CONFIG="../mruby_build_config.rb"
cp ../mbed.gembox ./mrbgems

rake clean
rake

popd

MRBDIR=mbed-mruby
cp -r $SRCDIR/src $MRBDIR
cp -r $SRCDIR/include $MRBDIR
cp -r $SRCDIR/build/mbed/mrblib/mrblib.c $MRBDIR/mrblib
rsync --exclude 'mruby-bin*' --exclude='mruby-io*' --exclude='test/' --include='*/' --include='*.c' --include='*.h' --include='*.def' --exclude='*' -av $SRCDIR/mrbgems/ $MRBDIR/mrbgems/
rsync --exclude 'mruby-bin*' --exclude='mruby-io*' --exclude='*.d' --exclude='*.o' -av $SRCDIR/build/mbed/mrbgems/ $MRBDIR/mrbgems/

