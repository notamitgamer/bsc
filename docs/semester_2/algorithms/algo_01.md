---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;" class="lucide lucide-binary"><rect x="14" y="14" width="4" height="6" rx="2"/><rect x="6" y="4" width="4" height="6" rx="2"/><path d="M6 20h4"/><path d="M14 10h4"/><path d="M6 14h2v6"/><path d="M14 4h2v6"/></svg> algo_01'
description: 'Write an algorithm to insert a node at the beginning.'
source: 'semester_2/algorithms/algo_01.md'
---

# algo_01

### Problem Statement

::: tip Problem Statement
Write an algorithm to insert a node at the beginning.
:::

## Algorithm
```
procedure insert_begin(head)
begin
    ptr ← get_node();
    print("Enter the value");
    read(val);
    info(ptr) ← val;
    next(ptr) ← NULL;
    if(head = NULL) 
        head ← ptr;
    else
        next(ptr) ← head;
        head ← ptr;
    endif
    return(head);
end procedure
```