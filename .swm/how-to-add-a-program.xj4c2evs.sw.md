---
title: How to add a program
---
## Introduction

In this document, we will learn how to add a new program/game to MultiLauncher.

## Example

We'll follow the implementation of Space Invaders for this example.

Every time we add a new instance, we add a item to the list, with the first one being the title and the second one the function to be runned:

<SwmSnippet path="src/programs/Menu.cpp" line="10">

---

&nbsp;

```
menuItem menuItems[] = {
  {"Space Invaders", SpaceInvaders::Run},
};
```

---

</SwmSnippet>

<SwmMeta version="3.0.0" repo-id="Z2l0aHViJTNBJTNBTXVsdGlMYXVuY2hlciUzQSUzQVZhbmthbmF0b3Jh" repo-name="MultiLauncher"><sup>Powered by [Swimm](https://app.swimm.io/)</sup></SwmMeta>
