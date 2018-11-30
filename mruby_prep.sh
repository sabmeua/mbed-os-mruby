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

