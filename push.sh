#!/bin/bash
function push_all() #将标签上传到github
{
    git add /home/liaoya/github/cpp实现/*
    git commit -m "日常更新"
    git push
}
  push_all

