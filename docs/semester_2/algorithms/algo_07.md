---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;" class="lucide lucide-binary"><rect x="14" y="14" width="4" height="6" rx="2"/><rect x="6" y="4" width="4" height="6" rx="2"/><path d="M6 20h4"/><path d="M14 10h4"/><path d="M6 14h2v6"/><path d="M14 4h2v6"/></svg> algo_07'
description: 'Write an algorithm to search an element from a linked list.'
source: 'semester_2/algorithms/algo_07.md'
---

# algo_07

### Problem Statement

::: tip Problem Statement
Write an algorithm to search an element from a linked list.
:::

## Algorithm
```
procedure search(head, key)
begin
    isFound ← false;
    ptr ← head;
    while(ptr ≠ NULL)
        if(info(ptr) = key)
            isFound ← true;
            break;
        endif
        ptr ← next(ptr);
    end while
    return(isFound);
end procedure
```