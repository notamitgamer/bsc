---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;" class="lucide lucide-binary"><rect x="14" y="14" width="4" height="6" rx="2"/><rect x="6" y="4" width="4" height="6" rx="2"/><path d="M6 20h4"/><path d="M14 10h4"/><path d="M6 14h2v6"/><path d="M14 4h2v6"/></svg> algo_02'
description: 'Algorithm — algo_02'
source: 'docs/semester_2/algorithms/algo_02.md'
---

# algo_02

::: tip Problem Statement
Write an algorithm to delete the first node of the list.
:::

## Algorithm
```
procedure delete_firstNode(head)
begin
    if(head = NULL)
        write("List is empty, Deletion is not possible.")
    else 
        p <- head 
        head <- next(p)
        delete(p)
    endif
    return(head)
end procedure
```