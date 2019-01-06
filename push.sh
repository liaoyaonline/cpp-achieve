#!/bin/bash
function push_all() #将标签上传到github
{
    git add /home/liaoya/github/cpp实现/*
    git status
    git commit -m "日常更新"
    git push origin master
}
  push_all

