"""Entry point for generating VitePress docs from list.txt.

Replaces the old standalone md.py — generation logic now lives in
utils/bsc_md/. Run this the same way md.py used to be run:

    python main.py
"""
from utils.bsc_md.pipeline import run

if __name__ == "__main__":
    run()
