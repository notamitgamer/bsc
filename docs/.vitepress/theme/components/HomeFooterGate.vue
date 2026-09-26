<script setup>
import { useData } from 'vitepress'
import DocFooterExtra from './DocFooterExtra.vue'

// 'layout-bottom' fires on every page type, after everything (including the
// home page's markdown body below the features array — see VPHome.vue,
// which puts <Content /> after 'home-features-after' with no slot below it).
// Doc pages already get the footer correctly via 'doc-after', so only
// render it here when this page is actually using the home layout —
// otherwise doc pages would get it twice.
const { frontmatter } = useData()
</script>

<template>
  <DocFooterExtra v-if="frontmatter.layout === 'home'" />
</template>
