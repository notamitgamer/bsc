---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;" class="lucide lucide-binary"><rect x="14" y="14" width="4" height="6" rx="2"/><rect x="6" y="4" width="4" height="6" rx="2"/><path d="M6 20h4"/><path d="M14 10h4"/><path d="M6 14h2v6"/><path d="M14 4h2v6"/></svg> algo_08'
description: 'Write an algorithm to find max element from the list.'
source: 'semester_2/algorithms/algo_08.md'
---

# algo_08

### Problem Statement

::: tip Problem Statement
Write an algorithm to find max element from the list.
:::

## Algorithm
```
procedure findMax(head)
begin
    if(head = NULL)
        write("List is empty.");
    else 
        ptr ← head;
        max ← info(ptr);
        while(ptr ≠ NULL)
            if(max < info(ptr))
                max ← info(ptr);
            endif
            ptr ← next(ptr);
        end while
        return(max);
    endif
end procedure
```