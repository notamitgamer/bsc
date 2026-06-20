---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;" class="lucide lucide-binary"><rect x="14" y="14" width="4" height="6" rx="2"/><rect x="6" y="4" width="4" height="6" rx="2"/><path d="M6 20h4"/><path d="M14 10h4"/><path d="M6 14h2v6"/><path d="M14 4h2v6"/></svg> algo_06'
description: 'Write an algorithm to delete the last node of the list.'
source: 'semester_2/algorithms/algo_06.md'
---

# algo_06

### Problem Statement

::: tip Problem Statement
Write an algorithm to delete the last node of the list.
:::

## Algorithm
```
procedure deletelastnode(head)
begin
    if(head = NULL)
        write("List is empty, deletion not possible.");
    else if(next(head) = NULL) 
        ptr ← head;
        head ← next(ptr);
        delete(ptr);
    else 
        ptr ← head;
        while(next(ptr) ≠ NULL)
            prev ← ptr;
            ptr ← next(ptr);
        end while
        delete(ptr);
        next(prev) ← NULL;
    endif
    return(head);
end procedure
```