---
title: 'VitePress → GitHub Converter'
description: 'Convert VitePress markdown syntax to GitHub-compatible markdown instantly.'
---

# VitePress → GitHub Converter

Paste your VitePress `.md` content on the left, hit **Convert**, and copy the GitHub-ready output on the right.

<script setup>
import { ref } from 'vue'

const input = ref('')
const output = ref('')
const copied = ref(false)

function convert() {
  let out = input.value

  out = out.replace(/^---[\s\S]*?---\n?/m, '')

  out = out.replace(/:::[ \t]*tip[ \t]*(.*?)\n([\s\S]*?):::/g, (_, label, body) => {
    const lines = body.trim().split('\n').map(l => '> ' + l).join('\n')
    return '> [!TIP]\n' + lines
  })
  out = out.replace(/:::[ \t]*warning[ \t]*(.*?)\n([\s\S]*?):::/g, (_, label, body) => {
    const lines = body.trim().split('\n').map(l => '> ' + l).join('\n')
    return '> [!WARNING]\n' + lines
  })
  out = out.replace(/:::[ \t]*danger[ \t]*(.*?)\n([\s\S]*?):::/g, (_, label, body) => {
    const lines = body.trim().split('\n').map(l => '> ' + l).join('\n')
    return '> [!CAUTION]\n' + lines
  })
  out = out.replace(/:::[ \t]*info[ \t]*(.*?)\n([\s\S]*?):::/g, (_, label, body) => {
    const lines = body.trim().split('\n').map(l => '> ' + l).join('\n')
    return '> [!NOTE]\n' + lines
  })

  out = out.replace(/\$([^$\n]+)\$/g, '`$1`')

  output.value = out.trim()
}

function copyOutput() {
  if (!output.value) return
  navigator.clipboard.writeText(output.value).then(() => {
    copied.value = true
    setTimeout(() => { copied.value = false }, 1800)
  })
}

function clear() {
  input.value = ''
  output.value = ''
}
</script>

<div class="converter">
  <div class="converter-grid">
    <div class="converter-panel">
      <label>VitePress markdown</label>
      <textarea v-model="input" placeholder="Paste your VitePress .md content here..."></textarea>
      <div class="converter-actions">
        <button class="bsc-btn bsc-btn-primary" @click="convert">Convert</button>
        <button class="bsc-btn" @click="clear">Clear</button>
      </div>
    </div>
    <div class="converter-panel">
      <label>GitHub markdown</label>
      <textarea :value="output" readonly placeholder="GitHub-compatible output will appear here..."></textarea>
      <div class="converter-actions">
        <button class="bsc-btn" @click="copyOutput">{{ copied ? 'Copied!' : 'Copy' }}</button>
      </div>
    </div>
  </div>
</div>

<style scoped>
.converter { margin-top: 1.5rem; }
.converter-grid {
  display: grid;
  grid-template-columns: 1fr 1fr;
  gap: 16px;
}
.converter-panel {
  display: flex;
  flex-direction: column;
  gap: 8px;
}
.converter-panel label {
  font-size: 13px;
  color: var(--vp-c-text-2);
  font-weight: 500;
}
.converter-panel textarea {
  width: 100%;
  height: 360px;
  font-family: var(--vp-font-family-mono);
  font-size: 12px;
  resize: vertical;
  box-sizing: border-box;
  background: var(--vp-c-bg-soft);
  color: var(--vp-c-text-1);
  border: 1px solid var(--vp-c-divider);
  border-radius: 8px;
  padding: 10px 12px;
}
.converter-actions {
  display: flex;
  gap: 8px;
}
@media (max-width: 600px) {
  .converter-grid { grid-template-columns: 1fr; }
}
</style>