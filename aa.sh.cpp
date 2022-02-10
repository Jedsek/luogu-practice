#!/usr/bin/env bash
path=~/luogu-practice
for file in $path/*
  do
    if [ -f $file ]
    then
      mv $file $file.cpp
    fi
done
