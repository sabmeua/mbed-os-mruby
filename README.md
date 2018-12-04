# mbed-os-mruby

# Note

* This repository is under implementation and it will not work well.
* Currently I have just reached to mirb starts up.

# How to build

```
git clone git@github.com:sabmeua/mbed-os-mruby.git && cd $_
mbed deploy
mbed compile
```

# To Update mruby source code

It can select mrbgems package by editing `mbed.gembox.exclude.list` if you need. In this file, write the name of the package you don't want to install.

When you run `./mruby_prep.sh` on the command line, it checks out latest [mruby](https://github.com/mruby/mruby) and copy the files to be mbed compile.

