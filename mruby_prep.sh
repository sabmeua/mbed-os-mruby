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

MBEDEXLIST=mbed.gembox.exclude.list
GEMSEXLIST=mrbgems.exclude.list
rsync -av --exclude-from=$MBEDEXLIST --exclude-from=$GEMSEXLIST \
  $SRCDIR/mrbgems/ $MRBDIR/mrbgems/
rsync -av --exclude-from=$MBEDEXLIST --exclude-from=$GEMSEXLIST \
  $SRCDIR/build/mbed/mrbgems/ $MRBDIR/mrbgems/

