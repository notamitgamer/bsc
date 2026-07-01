<template>
  <footer class="simple-footer">
    <p>
      Released under the 
      <a href="https://github.com" target="_blank" rel="noopener noreferrer" class="footer-link">MIT License</a>.
    </p>
    <p>2026 &copy;  <a href="https://amit.is-a.dev" target="_blank" rel="noopener noreferrer" class="footer-link">Amit Dutta</a></p>
  </footer>
</template>

<style scoped>
.simple-footer {
  margin-top: 3rem;
  padding-top: 1.5rem;
  border-top: 1px solid var(--vp-c-divider);
  text-align: center;
  font-size: 13px;
  color: var(--vp-c-text-2);
  line-height: 1.5;
}

.footer-link {
  color: var(--vp-c-brand-1);
  text-decoration: none;
  font-weight: 500;
  transition: color 0.2s ease;
}

.footer-link:hover {
  color: var(--vp-c-brand-2);
  text-decoration: underline;
}
</style>
