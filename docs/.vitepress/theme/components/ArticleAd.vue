<template>
  <div class="article-ad-container">
    <span class="ad-label">ADVERTISEMENT</span>
    
    <!-- EXACT A-ADS ADAPTIVE UNIT -->
    <div id="frame" style="width: 100%; margin: auto; position: relative; z-index: 99998;">
      <iframe 
        data-aa='2445210' 
        src='//acceptable.a-ads.com/2445210/?size=Adaptive'
        style='border:0; padding:0; width:70%; height:90px; overflow:hidden; display: block; margin: auto'
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
  margin-bottom: 12px;
}
</style>