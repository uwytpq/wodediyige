#!/bin/bash
# OpenClaw Workspace Git Sync Script
# 自动同步记忆到 GitHub

cd ~/.openclaw/workspace || exit 1

# 添加所有更改
git add -A

# 检查是否有更改
if git diff --staged --quiet; then
    echo "$(date): 没有新更改，跳过"
    exit 0
fi

# 提交更改
git commit -m "sync: $(date '+%Y-%m-%d %H:%M')" 

# 推送
git push origin master

echo "$(date): 同步完成"
