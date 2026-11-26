// Decompiled from classes.dex (SourceFile: bb$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class bb$1<K, V> extends android.util.LruCache<K, V> {
    // Fields
    final com.google.android.gms.tagmanager.l$a a;
    final com.google.android.gms.tagmanager.bb b;

    // Methods
    bb$1(com.google.android.gms.tagmanager.bb p0, int p1, com.google.android.gms.tagmanager.l$a p2)
    {
      super(p1);
      this.b = p0;
      this.a = p2;
    
    }

    protected int sizeOf(K p0, V p1)
    {
      try {
        return this.a.a(p0, p1);
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

}
