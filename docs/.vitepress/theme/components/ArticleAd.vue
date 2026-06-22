<template>
  <div class="article-ad-container">
    <span class="ad-label">ADVERTISEMENT</span>
    <div class="ad-content">
      <!-- Your A-Ads Iframe -->
      <iframe 
        data-aa='2445210' 
        src='//ad.a-ads.com/2445210/?size=125x125'
        style='border:0; padding:0; width:125px; height:125px; overflow:hidden; display:block; margin: 0 auto;' 
        allowtransparency='true'>
      </iframe>
    </div>
  </div>
</template>

<style scoped>
.article-ad-container {
  margin-top: 2rem;
  padding: 1rem;
  background: var(--vp-c-bg-elv);
  border: 1px solid var(--vp-c-divider);
  border-radius: 12px;
  display: flex;
  flex-direction: column;
  align-items: center;
  justify-content: center;
  width: 100%;
}

.ad-label {
  font-size: 10px;
  font-weight: 700;
  color: var(--vp-c-text-3);
  letter-spacing: 0.5px;
  margin-bottom: 8px;
}
</style>