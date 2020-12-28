typedef struct dict* Dict;

Dict DictCreate(void);

void DictDestroy(Dict);

void DictInsert(Dict, const char *key, const char *value);

const char* DictSearch(Dict, const char *key);

void DictDelete(Dict, const char *key);
