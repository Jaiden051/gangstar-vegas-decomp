// Decompiled from classes.dex (SourceFile: LikeActionController$MRUCacheWorkItem.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

class LikeActionController$MRUCacheWorkItem implements java.lang.Runnable {
    // Fields
    private static java.util.ArrayList mruCachedItems;
    private java.lang.String cacheItem;
    private boolean shouldTrim;

    // Methods
    static
    {
      mruCachedItems = new java.util.ArrayList();
    }

    LikeActionController$MRUCacheWorkItem(String p0, boolean p1)
    {
      super();
      this.cacheItem = p0;
      this.shouldTrim = p1;
    }

    public void run()
    {
      if ( this.cacheItem != null )
      {
        mruCachedItems.remove(this.cacheItem);
        mruCachedItems.add(0, this.cacheItem);
      }
      if ( this.shouldTrim && mruCachedItems.size() >= 128 )
      {
        while ( mruCachedItems.size() > 64 )
          LikeActionController.access$400().remove((String)mruCachedItems.remove(mruCachedItems.size() - 1));
      }
    }

}
