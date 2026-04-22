#!/usr/bin/env python3
"""AI大模型最新资讯搜索脚本"""
import subprocess
import json
from datetime import datetime

QUERY = "AI大模型 最新进展"
LIMIT = 10

proc = subprocess.Popen(
    ["uv", "run", "/home/admin/.openclaw/workspace/skills/searxng/scripts/searxng.py",
     "search", QUERY, "--time-range", "day", "-n", str(LIMIT), "--format", "json"],
    stdout=subprocess.PIPE, stderr=subprocess.PIPE, cwd="/home/admin/.openclaw/workspace"
)
stdout, stderr = proc.communicate(timeout=30)

if proc.returncode == 0:
    try:
        data = json.loads(stdout.decode('utf-8'))
        articles = data.get("results", [])
        
        date_str = datetime.now().strftime("%Y-%m-%d")
        msg = f"🤖 AI大模型资讯 {date_str}\n"
        msg += "=" * 30 + "\n\n"
        
        for i, article in enumerate(articles[:8], 1):
            title = article.get("title", "")
            url = article.get("url", "")
            msg += f"{i}. {title}\n   🔗 {url}\n\n"
        
        msg += "——via searxng"
        print(msg)
    except json.JSONDecodeError:
        print("解析失败")
        print(stdout.decode('utf-8')[:500])
else:
    print(f"搜索失败: {stderr.decode('utf-8')}")